#include <iostream>
#include <string>
#include <vector>

using namespace std;
int days = 0;
struct contributors
{
    string name;
    int no_of_skills;
    vector<pair<string, int> > skills;
    bool assigned = false;
};
struct projects
{
    string name;
    int days_required;
    int max_score;
    int best_before_deadline;
    int no_of_roles;
    vector<pair<string, int> > roles;
    bool finished = false;
    bool started = false;
    vector< pair<string, int> > contributorAssignedIndex;
};
int main(void)
{
    int score = 0;
    int con, proj;
    cin >> con >> proj;
    contributors contributor[con];
    for (int i = 0; i < con; i++)
    {
        cin >> contributor[i].name;
        cin >> contributor[i].no_of_skills;
        for (int j = 0; j < contributor[i].no_of_skills; j++)
        {
            pair<string, int> temp;
            cin >> temp.first;
            cin >> temp.second;
            contributor[i].skills.push_back(temp);
        }
    }
    cout << endl;
    cout << endl;
    projects project[proj];
    for (int i = 0; i < proj; i++)
    {
        cin >> project[i].name;
        cin >> project[i].days_required;
        cin >> project[i].max_score;
        cin >> project[i].best_before_deadline;
        cin >> project[i].no_of_roles;
        for (int j = 0; j < project[i].no_of_roles; j++)
        {
            pair<string, int> temp;
            cin >> temp.first;
            cin >> temp.second;
            project[i].roles.push_back(temp);
        }
    }
    /*// assign projects to contributors based on their skills and required level
    for(int i = 0; i<proj;i++){
        cout<<project[i].name<<endl;
        for(int j = 0; j<con;j++){
            int flag = 0;
            for(int k = 0; k<project[i].no_of_roles;k++){
            for(int l = 0; l<contributor[j].no_of_skills;l++){
                if(project[i].roles[k].first == contributor[j].skills[l].first && project[i].roles[k].second <= contributor[j].skills[l].second){
                flag = 1;
                break;
                }
            }
            if(flag == 1)
                break;
            }
            if(flag == 1){
            cout<<contributor[j].name<<" ";
            }
        }
        cout<<endl;
    }*/
    int count = 0;
    cout<<proj<<endl;
    
    while (count<proj)
    {
        // deassign code
        for (int i = 0; i < proj; i++)
        {
            if (project[i].days_required == 0 && project[i].finished == false)
            {
                cout<<project[i].name<<endl;
                project[i].finished = true;
                if (project[i].best_before_deadline < 0)
                {
                    score += project[i].max_score + project[i].best_before_deadline;
                }
                else
                {
                    score += project[i].max_score;
                }
                // deassign the contributors
                for (int k = 0; k < project[i].contributorAssignedIndex.size(); k++)
                {
                    int index = project[i].contributorAssignedIndex[k].second;
                    cout<<contributor[index].name<<" ";
                    contributor[index].assigned = false;

                }
                count++;
                cout<<endl;

            }
            
        }
        // assign
        for (int i = 0; i < proj; i++)
        {
            // cout<<project[i].name<<endl;
            if (!project[i].finished)
            {
                for (int j = 0; j < con; j++)
                {
                    int flag = 0;
                    for (int k = 0; k < project[i].no_of_roles; k++)
                    {
                        for (int l = 0; l < contributor[j].no_of_skills; l++)
                        {
                            // check if project skills req are less than the skills of the contributor
                            // OR
                            // mentor available: if contributor skills are less than project required skills by 1 then check for
                            // mentor
                            bool flagMentor = false;
                            for (int m = 0; m < con; m++)
                            {
                                if (project[i].roles[k].first == contributor[j].skills[l].first && project[i].roles[k].second 
                                <= contributor[j].skills[l].second && m != j)
                                {
                                    flagMentor = true;
                                    break;
                                }
                            }

                            if (!contributor[j].assigned && (project[i].roles[k].first == contributor[j].skills[l].first) && (
                                (project[i].roles[k].second <= contributor[j].skills[l].second) 
                                || (project[i].roles[k].second - contributor[j].skills[l].second == 1 && flagMentor)))
                            {
                                
                                
                                
                                bool check = true;
                                for(int y = 0; y < project[i].contributorAssignedIndex.size();y++){
                                    pair<string, int> p = project[i].contributorAssignedIndex[y];
                                    if(project[i].contributorAssignedIndex[y].second == j) {
                                        check = false;
                                        break;
                                    }
                                }
                                if(check){
                                    pair<string, int> temp;
                                    temp.second = j;
                                    temp.first = contributor[j].skills[l].first;
                                    project[i].contributorAssignedIndex.push_back(temp);
                                }
                                
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 1)
                            break;
                    }
                    if (flag == 1)
                    {
                        //cout << contributor[j].name << " ";
                    }
                }
            }

            if (project[i].contributorAssignedIndex.size() == project[i].no_of_roles)
            {
                if(!project[i].started){
                    project[i].started = true;
                    for (int k = 0; k < project[i].contributorAssignedIndex.size(); k++)
                    {
                        int index = project[i].contributorAssignedIndex[k].second;
                        contributor[index].assigned = true;
                        //skills upgrade
                        string skill = project[i].contributorAssignedIndex[k].first;
                        for(int t=0;t<contributor[index].no_of_skills;t++){
                            if(contributor[index].skills[t].first == skill){
                                contributor[index].skills[t].second++;
                            }
                        }

                    }
                }
                project[i].days_required--;
            }
            project[i].best_before_deadline--;
        }
        days++;
    }
    cout<<score<<endl;
    return 0;
}
