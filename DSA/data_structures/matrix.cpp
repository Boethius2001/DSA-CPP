#include <iostream>
#include <vector>

class graph{
    public:
    int matrix[5][5];

    graph(){
        render_graph();
    }

    void add_edge(int src , int dst){
        matrix[src][dst] = 1;
    }

    bool check_edge(int src, int dst){
        return matrix[src][dst] == 1;
    }

    void print_matrix(){
        std::cout << std::endl;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    void render_graph(){
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                matrix[i][j] = 0;
            }
        }
    }

};

int main(){

    graph m1;

    m1.add_edge(0,1);
    m1.add_edge(1,0);
    m1.add_edge(0,2);
    m1.add_edge(2,3);

    m1.print_matrix();
    return 0;
}