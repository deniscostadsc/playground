#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

#define INFINITY 1 << 31

std::map<std::string,  std::vector<std::string> > graph;
std::map<std::string, bool> visited;
std::string letters = "-abcdefgh";
std::string numbers = "-12345678";
std::queue<std::string> q;



void create_chess_graph() {
    int i, j;
    std::string li, nj;

    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            li = letters[i];
            nj = numbers[j];

            if (i + 2 <= 8 && j + 1 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i + 2, 1) + numbers.substr(j + 1, 1));
            }

            if (i + 2 <= 8 && j - 1 >= 1){
                graph[li + nj].push_back(
                    letters.substr(i + 2, 1) + numbers.substr(j - 1, 1));
            }

            if (i - 2 >= 1 && j + 1 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i - 2, 1) + numbers.substr(j + 1, 1));
            }

            if (i - 2 >= 1 && j - 1 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i - 2, 1) + numbers.substr(j - 1, 1));
            }

            if (i + 1 <= 8 && j + 2 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i + 1, 1) + numbers.substr(j + 2, 1));
            }

            if (i + 1 <= 8 && j - 2 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i + 1, 1) + numbers.substr(j - 2, 1));
            }

            if (i - 1 >= 1 && j + 2 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i - 1, 1) + numbers.substr(j + 2, 1));
            }

            if (i - 1 >= 1 && j - 2 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i - 1, 1) + numbers.substr(j - 2, 1));
            }
        }
    }
    //std::map<std::string,  std::vector<std::string> >::iterator m_it;

    //for (m_it = graph.begin(); m_it != graph.end(); m_it++) {
        //std::cout << m_it->first << " - " << m_it->second.size() << std::endl;
        //for (it = graph[m_it->first].begin(); it != graph[m_it->first].end(); it++) {
            //std::cout << " - " << *it <<std::endl;
        //}
    //}
}

void unvisit() {
    int i, j;
    std::string li, nj;

    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            li = letters[i];
            nj = numbers[j];

            visited[li + nj] = false;
        }
    }
    //std::map<std::string, bool>::iterator m_it;
    //for (m_it = visited.begin(); m_it != visited.end(); m_it++) {
        //std::cout << m_it->first << "  --  " << m_it->second << std::endl;
    //}
}

void bfs(std::string start, std::string goal) {
    std::vector<std::string>::iterator it;

    unvisit();

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        std::string current = q.front();
        std::cout << "+++ " << current << std::endl;
        q.pop();

        //std::cout << current << " ********** " << std::endl;
        //std::cout << current << " ^^^^^^^^^^ " << *graph[current].begin() << std::endl;
        for (it = graph[current].begin(); it != graph[current].end(); it++) {
            if (!visited[*it]) {
                visited[*it] = true;
                q.push(*it);
            }
        }
    }


}

int main() {
    int moves;
    std::vector<std::string>::iterator it;
    std::string from, to;

    create_chess_graph();

    while (std::cin >> from >> to) {
        bfs(from, to);

        std::cout << "To get from " << from;
        std::cout << " to " << to << " takes " << moves;
        std::cout << " knight moves." << std::endl;

        graph.clear();
    }
    return 0;
}
