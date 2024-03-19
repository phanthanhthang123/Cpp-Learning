#include<iostream>
#include<string>
#include<cstring>
#include<queue>
#include<vector>


using namespace std;

int a[1001][1001]; // mảng 2 chiều lưu thứ tự các đỉnh
vector<int>v[1001]; // mảng vector dùng để lưu danh sách các đỉnh kề
bool visited[1000];// mảng visited đùng để đánh dấu đỉnh đã được thăm
int n,m; // n đỉnh , m cạnh

void input(){ // hàm nhập giá trị đầu vào 
    memset(visited,false,sizeof(visited)); 
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++){ // chuyen ma tran ke -> danh sach ke
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                v[i].push_back(j);
            }
        }
    }
}

void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int c =q.front();
        q.pop();
        cout<<c<< " ";
        for(auto x: v[c]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
    }
}
int main(){
    input();
    bfs(1);

    return 0;
}

// thuật toán BFS
//// Cách hoạt động của thuật toán bfs
// Bfs : breadth-first-search -> tìm kiếm theo chiểu rộng 
// Sử dụng hàng đợi để thực hiện 

// MÃ Giả
// bfs(u){
    //khởi tạo :
        //queue = rỗng;
        //push(queue,u);
        //visited[u] = true;
    // lặp khi hàng đợi vẫn còn phần tử 
        //{
            //v = queue.front();  
            //queue.pop(); // xoa phan tu ở đầu hàng đợi
            //<thăm v>
            //foreach(x : kề[v]){
                //if(x chưa được thăm){
                    //queue.push(x); -> đẩy vào hàng đợi
                    //visited[x] = true; -> đánh dấu đã thăm
                //}
            //}
        //}
//}


