#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct fritacole
{
  char name[100];
  int player_id;
  float height;
  int integrity;
  int interest;
  int ability;
  int discipline;
};
typedef struct fritacole frita;

struct team
{
  int no_of_players;
  char team_name[100];
  frita team_members[100];
};
typedef struct team team;

struct game
{

  team team1, team2;
  int points_team1;
  int fouls_team1;
  int points_team2;
  int fouls_team2;
};
typedef struct game game;

int input_no_players();
/* team_id - id of the team to which the player belongs.
   id - An unique id should be passed by the caller.
*/
frita input_fritacole(int team_id, int fritacole_id);

// Storing each player's info.
int input_no_players();
void init_game(game *g);             // Starting the game by taking all the details of
void input_teams(game *g);           // Storing the player's info of each team.
int compare_teams(team t1, team t2); // Comparing each player's attributes.
void point(int player_id, game *g);  // Adding points to the respective teams.
void foul(int player_id, game *g);   // Adding fouls to the respective teams.
                                     // To display the player-id of each team.
                                     // teams and players.
void run_game(game *g);
void Display_player_id(game g); // Add points,fouls during the game or end the
                                // game when wanted.
void verify_win(
    game g); // Check whether the winning team deserved and vice versa.);

int main()
{

  game g;
  init_game(&g);
  run_game(&g);
  return 0;
}
void Display_player_id(game g)
{
  for (int i = 0; i < g.team1.no_of_players; i++)
  {
    printf("The ID of %s is %d \n", g.team1.team_members[i].name,
           g.team1.team_members[i].player_id);
  }
  printf("\n\n");

  for (int i = 0; i < g.team1.no_of_players; i++)
  {
    printf("The ID of %s is %d \n", g.team2.team_members[i].name,
           g.team2.team_members[i].player_id);
  }
  printf("\n\n");
}
int input_no_players()
{
  int x;
  printf("Enter the no of players in each team: ");
  scanf("%d", &x);
  return x;
}
frita input_fritacole(int team, int id)
{

  frita f;
  printf("Enter the name of player:\n");
  scanf("%s", f.name);
  printf("Height:");
  scanf("%f", &f.height);
  printf("Integrity(Out of 10):");
  scanf("%d", &f.integrity);
  printf("Interest(Out of 10):");
  scanf("%d", &f.interest);
  printf("Ability(Out of 10):");
  scanf("%d", &f.ability);
  printf("Discipline(Out of 10):");
  scanf("%d", &f.discipline);
  f.player_id = id;
  return f;
}
void input_teams(game *g)
{
  printf("Enter details for players of team 1:\n");
  for (int i = 0; i < g->team1.no_of_players; i++)
  {
    printf("Enter the details of team 1, player %d:\n", i + 1);
    g->team1.team_members[i] = input_fritacole(1, i);
  }
  printf("Enter details for players of team 2:\n");
  for (int i = 0; i < g->team2.no_of_players; i++)
  {
    printf("Enter the details of team 2, player %d:\n", i + 1);
    g->team2.team_members[i] = input_fritacole(2, i + g->team1.no_of_players);
  }
}
void init_game(game *g)
{
  g->fouls_team1 = 0;
  g->fouls_team2 = 0;
  g->points_team1 = 0;
  g->points_team2 = 0;
  g->team1.no_of_players = input_no_players();
  g->team2.no_of_players = g->team1.no_of_players;
  input_teams(g);
}
void point(int player_id, game *g)
{
  int team1_pnts = 0;
  int team2_pnts = 0;
  for (int i = 0; i < g->team1.no_of_players; i++)
  {
    if (g->team1.team_members[i].player_id == player_id)
    {
      team1_pnts++; // A player can score only one point in one round.
      break;
    }
    else if (g->team2.team_members[i].player_id == player_id)
    {
      team2_pnts++; // A player can score only one point in one round.
      break;
    }
  }
  g->points_team1 += team1_pnts; // Updating points.
  g->points_team2 += team2_pnts;
}
int compare_teams(team t1, team t2) // compare each player
{
  int result_team1 = 0;
  int result_team2 = 0;

  for (int i = 0; i < t1.no_of_players; i++)
  {

    if (fabs((float)(t1.team_members[i].height >
                     (float)t2.team_members[i].height)))
    {
      result_team1++;
    }
    else
    {
      result_team2++;
    }
    if (t1.team_members[i].ability > t2.team_members[i].ability)
    {
      result_team1++;
    }
    else
    {
      result_team2++;
    }
    if (t1.team_members[i].discipline > t2.team_members[i].discipline)
    {
      result_team1++;
    }
    else
    {
      result_team2++;
    }

    if (t1.team_members[i].integrity > t2.team_members[i].integrity)
    {
      result_team1++;
    }
    else
    {
      result_team2++;
    }
    if (t1.team_members[i].interest > t2.team_members[i].interest)
    {
      result_team1++;
    }
    else
    {
      result_team2++;
    }
  }
  if (result_team1 > result_team2)
  {
    return 1;
  }
  else if (result_team1 < result_team2)
  {
    return 2;
  }
  else
  {
    return 0;
  }
}
void foul(int player_id, game *g)
{

  int team1_fouls = 0;
  int team2_fouls = 0;
  for (int i = 0; i < g->team1.no_of_players; i++)
  {
    if (g->team1.team_members[i].player_id == player_id)
    {
      team1_fouls++; // A player can make a foul only once point in one round.
      break;
    }
    else if (g->team2.team_members[i].player_id == player_id)
    {
      team2_fouls++; // A player can make a foul only once point in one round.
      break;
    }
  }
  g->fouls_team1 += team1_fouls; // Updating fouls.
  g->fouls_team2 += team2_fouls;
}
void verify_win(game g)
{
  int better_team;
  better_team = compare_teams(g.team1, g.team2);
  if (g.points_team1 > g.points_team2)
  {
    printf("Team 1 won the game.\n"); // With more points.
    if (better_team == 1)
    {
      printf("Team 1 deserved to win.Valid match.\n"); // With more qualities.
    }
    else
    {
      printf("Team 1 didn't deserve to win. Invalid match.\n"); // More points
                                                                // but lesser
                                                                // qualities.
    }
  }
  else if (g.points_team2 > g.points_team1)
  {
    printf("Team 2 won the game.\n"); // With more points.
    if (better_team == 2)
    {
      printf("Team 2 deserved to win.Valid match.\n"); // With more qualities.
    }
    else
    {
      printf(
          "Team 2 didn't deserve to win. Invalid match.\n"); // More points but
                                                             // lesser qualities
    }
  }
  else
  {
    if (g.fouls_team1 > g.fouls_team2)
    {
      printf(
          "Team 2 won the game since they made less fouls.\n"); // Less fouls by
                                                                // team 2(points
                                                                // are equal).
    }
    else if (g.fouls_team1 < g.fouls_team2)
    {
      printf(
          "Team 1 won the game since they made less fouls.\n"); // Less fouls by
                                                                // team 1(points
                                                                // are equal).
    }
    else
    {
      printf(
          "It's a draw since both teams have equal points and fouls.\n"); // Equal
                                                                          // points
                                                                          // and
                                                                          // equal
                                                                          // fouls.
    }
  }
}
void run_game(game *g)
{
 
  Display_player_id(*g);
  while (1)
  {
    int command;
    printf("Enter the command(1, 2 or 3) :\n 1.Add points.\n 2.Add fouls.\n "
           "3.End game.\n");
    scanf("%d", &command);
    if (command == 1)
    {
      int player_id;
      printf("Enter player ID to add points:");
      scanf("%d", &player_id);
      point(player_id, g);
    }
    else if (command == 2)
    {
      int player_id;
      printf("Enter player ID to add fouls:");
      scanf("%d", &player_id);
      foul(player_id, g);
    }
    else if (command == 3)
    {
      verify_win(*g);
      break;
    }
    else
    {
      printf("Invalid command.Try again.\n");
    }
  }
}
