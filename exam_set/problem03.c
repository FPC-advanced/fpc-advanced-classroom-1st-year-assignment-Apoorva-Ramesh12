#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
struct fritacole
{
    char name[100];
    int height;
    int integrity;
    int interest;
    int ability;
    int discipline;
};
typedef struct fritacole frita;

struct team
{

    frita team_members[100];
};
typedef struct team team;
struct game
{
    int points;
    int fouls;
};
typedef struct game game;
int input_n(); //No. of players
frita input_fritacole(); //Details of each player
void input_team(int n, team a[n], team b[n]); //Details of each team
void points_scored(int n, game g1[n], game g2[n]);//Points scored by each team
int compare_fritacoles(int n, team a[n], team b[n]);//Comparing each player, who is most likely to score or make a foul.
int compare_teams(int n, game g1[n], game g2[n]);//Comparing the final points and fouls of each team.
void verify_win(int result_teams, int result_frita);//Check whether the losing or winning teams deserved it.


int main()
{
    int n;
    n = input_n();
    team a[n], b[n];//2 teams with n players each
    input_team(n, a, b);//Input details of each player of both teams
    game g1[n], g2[n];// 
    points_scored(n, g1, g2);//Has both points and fouls
    int fritacoles_result, teams_result;
    fritacoles_result = compare_fritacoles(n, a, b);//Comparing each fritacole
    teams_result = compare_teams(n, g1, g2);//Comparing the results of both teams
    verify_win(fritacoles_result, teams_result);//To check which team was deserving
    return 0;
}
int input_n()
{
    int x;
    printf("enter the no of players in each team");
    scanf("%d", &x);
    return x;
}
frita input_fritacole()
{
    frita f;
    printf("enter the member detials\n");
    printf("enter the name\n");
    scanf("%s", f.name);
    printf("Enter the height, integrity,interst,ability and discipline");
    scanf("%d%d%d%d%d", &f.height, &f.integrity, &f.interest, &f.ability, &f.discipline);
    return f;
}
void input_team(int n, team a[n], team b[n])
{
    for (int i = 0; i < n; i++)
    {
        a[i].team_members[i] = input_fritacole();
        b[i].team_members[i] = input_fritacole();
    }
}
void points_scored(int n, game g1[n], game g2[n])
{
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the points and fouls for team1 player %d",i+1);
//         scanf("%d %d", &g1[i].points, &g1[i].fouls);
//         printf("enter the points and fouls for team 2 player %d",i+1);
//         scanf("%d%d", &g2[i].points, &g2[i].fouls);
//     }
// }
// int compare_fritacoles(int n, team a[n], team b[n])
// {
//     int result_team1;
//     int result_team2;
//     for (int i = 0; i < n; i++)
//     {
//         result_team1 = a[i].team_members[i].height + a[i].team_members[i].ability + a[i].team_members[i].integrity + a[i].team_members[i].discipline + a[i].team_members[i].interest;
//         result_team2 = b[i].team_members[i].height + b[i].team_members[i].integrity + b[i].team_members[i].interest + b[i].team_members[i].ability + b[i].team_members[i].discipline;
//     }
//     if (result_team1 > result_team2)
//     {
//         printf("the better team is team 1");
//         return 1;
//     }
//     else
//     {
//         printf("the better team is team 2");
//         return 2;
//     }
}
int compare_teams(int n, game g1[n], game g2[n])
{
    int points_result1 = 0;
    int points_result2 = 0;
    int folus_result1, fouls_result2;
    for (int i = 0; i < n; i++)
    {
        points_result1 = g1[i].points + points_result1;
        points_result2 = g2[i].points + points_result2;
        folus_result1 = g1[i].fouls + folus_result1;
        fouls_result2 = g2[i].fouls + fouls_result2;
    }
    if (points_result1 > points_result2)
    {
        return 1;
    }
    else if (points_result2 > points_result1)
    {
        return 2;
    }
    else
    {
        if (folus_result1 > fouls_result2)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
}
void verify_win(int fritacoles_result, int teams_result)
{

    if (fritacoles_result == teams_result)
    {
        printf("\nthe better team won the game");
    }
    else
    {
        printf("\nthe better team lost the game");
    }
}
