/*****************program1******************/

#include <iostream>
using namespace std;

int Partition(int *arr, int low, int high){
	int pivot = arr[low];
	int i = low+1;
	int j = high;
	while(1){
		while(arr[i]<=pivot && i<=high) i++;
		while(arr[j]>pivot && j>=low) j--;
		if(i<j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}//end of if
		else{
			arr[low] = arr[j];
			arr[j] = pivot;
			return j;
		}//end of else
	}//end of loop
}//end of method

void quickSort(int *arr, int low, int high){
	if(low<high){
		int pivot_pos = Partition(arr,low,high);
		quickSort(arr,low,pivot_pos-1);
		quickSort(arr, pivot_pos+1, high);
	}//end of if
}//end of method

void kthSmallest(int *arr, int start, int end, int k){
	quickSort(arr, start, end);
	cout<<arr[start+k]<<endl;
}//end of method

int main(){
	int *arr, *arr1, n, i, start, end ,k;
	cout<<"Enter number of elements :";
	cin>>n;
	arr = new int[n];
	arr1 = new int[n];
	cout<<"Enter array elements :\n";
	for(i = 0; i<n;i++)
		cin>>arr[i];
	i = 1;
	while(1){
		cout<<"Query "<<i<<" : start, end, k :";
		cin>>start>>end>>k;
		if(start == -1 || end == -1 || k == -1) break;
		for(int j=0; j<n; j++)
			arr1[j] = arr[j];
		kthSmallest(arr1, start-1,end-1, k-1);
		i++;
	}//end of while
	return 0;
}









/******************* program2********************/

# include<iostream>
using namespace std;
int adjacent[10][10],m,visited[10];
void DFS(int v)
{
	int i;
	cout<<v<<"\t";
	visited[v]=1;
	for(i=0;i<m;i++)
	{
		if(adjacent[v][i]==1 && visited[i]==0)
			DFS(i);
	}
}

int main()
{
	int j,i;
	cout<<"enter the number of nodes\n";
	cin>>m;
	cout<<"entre the adjacency matrix\n";
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			cin>>adjacent[i][j];
	for(i=0;i<m;i++)
		visited[i]=0;
	for(j=0;j<m;j++)
		if(visited[j]==0)
	{
		DFS(j);
		cout<<"\n";
	}
	return 0;
	
}

/****************program3****************************/

# include<iostream>
using namespace std;
int matrix[10][10],visited[10][10],m,n;
void DFS(int row,int col)
{
	int rownum[]={-1,-1,-1,0,0,1,1,1};
	int colnum[]={-1,0,1,-1,1,-1,0,-1};
	visited[row][col]=1;
	for(int k=0;k<8;k++)
		if((row+rownum[k])>=0 && (row+rownum[k])<m && (col+colnum[k])>=0 && (col+colnum[k]<n) && matrix[row+rownum[k]][col+colnum[k]]==1 &&visited[row+rownum[k]][col+colnum[k]]==0)
			DFS(row+rownum[k],col+colnum[k]);
}
int main()
{
	int j,i;
	cout<<"enter the number of rows and cols\n";
	cin>>m;
	cin>>n;
	cout<<"entre the adjacency matrix\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>matrix[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			visited[i][j]=0;
	int count=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(matrix[i][j]==1 && visited[i][j]==0)
			{
				DFS(i,j);
				++count;
			}
	cout<<count;
	return 0;
	
}

/*******************program4********************************/
	#include<stdio.h>
int place(int x[], int k)
{
	int i;
	for(i=1;i<=k-1;i++)
	{
		if(i+x[i]==k+x[k]||i-x[i]==k-x[k]||x[i]==x[k])
			return 0;
	}
	return 1;
}

void nqueens(int n)
{
	int k,x[20],count=0;
	k=1;
	x[k]=0;
	while(k!=0)
	{
		x[k]++;
		while(place(x,k)!=1 && x[k]<=n)
			x[k]++;
		if(x[k]<=n)
		{
			if(k==n)
			{
				printf("\nSolution is %d\n", ++count);
				printf("Queen\t\tPosition\n");
				for(k=1;k<=n;k++)
					printf("%d\t\t%d\n", k,x[k]);
			}
			else
		
	{
				k++;
				x[k]=0;
			}
		}
		else
			k--;
	}
}

int main()
{
	int n;
	printf("Enter the number of Queens\n");
	scanf("%d", &n);
	nqueens(n);
	return 0;
}

/********************************program5*****************************/

#include<iostream>
#include<stack>
#define NODE 5
using namespace std;

int graph[NODE][NODE] = {
   {0, 0, 1, 0, 0},
   {0, 0, 1, 0, 0},
   {0, 0, 0, 1, 1},
   {0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0},
};

void topoSort(int u, bool visited[], stack<int>&stk) {
   visited[u] = true;                //set as the node v is visited

   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {             //for allvertices v adjacent to u
         if(!visited[v])
            topoSort(v, visited, stk);
      }
   }
   stk.push(u);     //push starting vertex into the stack
}

void performTopologicalSort() {
   stack<int> stk;
   bool vis[NODE];

   for(int i = 0; i<NODE; i++)
      vis[i] = false;     //initially all nodes are unvisited

   for(int i = 0; i<NODE; i++)
      if(!vis[i])     //when node is not visited
         topoSort(i, vis, stk);

   while(!stk.empty()) {
      cout << stk.top() << " ";
      stk.pop();
   }
}

int main() {
   cout << "Nodes after topological sorted order: ";
   performTopologicalSort();
}

/**********************program6**************************/

#include <iostream>
using namespace std;

void sumOfSubsets(int *arr, int d, int *x, int currsum, int k, int remsum){
	//currsum : current sum ; remsum : remaining sum
	x[k] = 1; //include the kth element, this is left child in state space tree
	if(currsum + arr[k] == d){
		//subset found
		for(int i=0;i<=k;i++)
			if(x[i] == 1) cout<<arr[i]<<" ";
		cout<<endl;
		return;
	}//end of if
	else if(currsum+arr[k]+arr[k+1]<=d)
		sumOfSubsets(arr,d,x,currsum+arr[k],k+1,remsum-arr[k]);
	
	if((currsum+remsum-arr[k]>=d)&&(currsum+arr[k+1]<=d)){
		//don't include kth element, this is right child in state space tree
		x[k]=0;
		sumOfSubsets(arr,d,x,currsum, k+1,remsum-arr[k]);
	}//end of if
}//end of method

int main(){
	int n, *arr, *x, d, sum;
	cout<<"Enter number of elements :";
	cin>>n;
	arr = new int[n];
	x = new int[n];
	cout<<"Enter array elements :\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the required sum :";
	cin>>d;
	for(int i=0;i<n;i++) // calcuting sum of all array elements
		sum+=arr[i];
	sumOfSubsets(arr,d,x, 0, 0, sum); // currsum =0, k=0, remsum = sum
	return 0;
}//end of main

/*
OUTPUT:
Enter number of elements :4 
Enter array elements :
5 7 8 10
Enter the required sum :15
5 10 
7 8 
/*****************************program7**********************/

#include <iostream>
#include <cmath>
using namespace std;


float median(int *a, int n) 
{ 
	if (!(n&1)) // if n is even 
		return (a[n / 2] + 
				a[n / 2 - 1]) / 2; 
	else
		return a[n / 2]; 
} 

float getMedian(int *ar1, int *ar2, int n) 
{ 
	if (n <= 0) 
		return -1; 
	if (n == 1) 
		return (ar1[0] + ar2[0]) / 2; 
	if (n == 2) 
		return (max(ar1[0], ar2[0]) + 
				min(ar1[1], ar2[1])) / 2; 

	/* get the median of the first array */
	float m1 = median(ar1, n); 
	/* get the median of the second array */
	float m2 = median(ar2, n); 
	
	if (m1 == m2) 
		return m1; 

	/* if m1 < m2 then median must exist in ar1[m1....] and ar2[....m2] */
	if (m1 < m2) { 
		if (!(n&1)) 
			return getMedian(ar1 + n / 2 - 1, ar2, n - n / 2 + 1); 
		return getMedian(ar1 + n / 2, ar2, n - n / 2); 
	} 

	/* if m1 > m2 then median must exist in ar1[....m1] and ar2[m2...] */
	if (!(n&1)) 
		return getMedian(ar2 + n / 2 - 1,ar1, n - n / 2 + 1); 
	return getMedian(ar2 + n / 2,ar1, n - n / 2); 
} 

int main() {
    int *ar1, *ar2, n;
    cout<<"Enter number of elements :";
    cin>>n;
    ar1 = new int[n];
    ar2 = new int[n];
    cout<<"Enter first sorted array :\n";
    for(int i=0;i<n;i++)
    	cin>>ar1[i];
    cout<<"Enter second sorted array :\n";
    for(int i=0;i<n;i++)
    	cin>>ar2[i];
    cout<<"Median :"<<getMedian(ar1,ar2,n)<<"\n";
	return 0; 
} 

/**************************program8***********************/

#include <iostream>
#include <queue> 
using namespace std; 

// QItem for current location and distance from source location 
class QItem { 
public: 
	int row; 
	int col; 
	int dist; 
	QItem(int x, int y, int w) : row(x), col(y), dist(w) 
	{ /*
		same as :
		row = x;
		col=y;
		dist=w;
	  */
	} 
}; 

int minDistance(char **grid,int N, int M) 
{ 
	QItem source(0, 0, 0); 

	// To keep track of visited QItems. Marking blocked cells as visited. 
	bool **visited = new bool*[N];
	for(int i=0; i<M; i++)
		visited[i] = new bool[M]; 
		
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < M; j++) 
		{ 
			if (grid[i][j] == '0') 
				visited[i][j] = true; 
			else
				visited[i][j] = false; 

			// Finding source 
			if (grid[i][j] == 's') 
			{ 
			source.row = i; 
			source.col = j; 
			} 
		} 
	} 

	// applying BFS on matrix cells starting from source 
	queue<QItem> q; 
	q.push(source); 
	visited[source.row][source.col] = true; 
	while (!q.empty()) { 
		QItem p = q.front(); 
		q.pop(); 

		// Destination found; 
		if (grid[p.row][p.col] == 'd') 
			return p.dist; 

		// moving up 
		if (p.row - 1 >= 0 && 
			visited[p.row - 1][p.col] == false) { 
			q.push(QItem(p.row - 1, p.col, p.dist + 1)); 
			visited[p.row - 1][p.col] = true; 
		} 

		// moving down 
		if (p.row + 1 < N && 
			visited[p.row + 1][p.col] == false) { 
			q.push(QItem(p.row + 1, p.col, p.dist + 1)); 
			visited[p.row + 1][p.col] = true; 
		} 

		// moving left 
		if (p.col - 1 >= 0 && 
			visited[p.row][p.col - 1] == false) { 
			q.push(QItem(p.row, p.col - 1, p.dist + 1)); 
			visited[p.row][p.col - 1] = true; 
		} 

		// moving right 
		if (p.col + 1 < M && 
			visited[p.row][p.col + 1] == false) { 
			q.push(QItem(p.row, p.col + 1, p.dist + 1)); 
			visited[p.row][p.col + 1] = true; 
		} 
	} 
	return -1; 
} 

int main() 
{ 
	char **grid;
	int N, M;
	cout<<"Enter number of rows :";
	cin>>N;
	cout<<"Enter number of columns :";
	cin>>M;
	grid = new char*[N];
	for(int i=0; i<M; i++)
		grid[i] = new char[M];
	
	cout<<"Enter grid :\n";
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			cin>>grid[i][j];

	cout << "Min distance : "<<minDistance(grid,N,M)<<endl; 
	return 0; 
} 

/**************************program9a*************************/

#include <iostream>
using namespace std;

int findPivot(int *a, int low, int high){
	//base cases
	if(high < low) 
		return -1;
	if(high == low) 
		return low;
	
	int mid = (low+high)/2;
	if(mid<high && a[mid]>a[mid+1]) 
		return mid;
	if(mid>low && a[mid]<a[mid-1]) 
		return mid-1;

	if(a[low]>=a[mid]) 
		return findPivot(a,low,mid-1);
	
	return findPivot(a,mid+1,high);
}//end of method

int binarySearch(int *a,int low,int high, int key){
	if(low > high) 
		return -1;
	int mid = (low+high)/2;
	if (key == a[mid]) 
		return mid;
	else if(key > a[mid]) 
		return binarySearch(a,mid+1,high,key);
	else
		return binarySearch(a,low,mid-1,key);
}//end

int main(){
	int *a,n,key;
	cout<<"Enter number of elements :";
	cin>>n;
	a = new int[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter key :";
	cin>>key;
	//finding pivot
	int pivot = findPivot(a,0,n-1);
	//cout<<"Pivot :"<<pivot<<"\n";
	if(key > a[0])
		cout<<key<<" found at "<<binarySearch(a,0,pivot,key)<<" index\n";
	else
		cout<<key<<" found at "<<binarySearch(a,pivot+1,n-1,key)<<" index\n";

	return 0;
}//end

/*****************************program9b***************************/

#include <iostream>
#include <fstream>
using namespace std;

int firstIndex(int arr[],int n,int key)
{
	int beg = 0, end = n-1, mid = 0;
	while(beg<=end)
	{
		mid = beg+(end-beg)/2;
		if((mid == 0 || key > arr[mid-1]) && key == arr[mid]) 
			return mid;
		else if(key>arr[mid]) 
			beg = mid+1;
		else 
			end = mid-1;
	}
	return -1;
}

int lastIndex(int arr[],int n,int key){
	int beg = 0, end = n-1, mid = 0;
	while(beg<=end)
	{
		mid = beg+(end - beg)/2;
		if((mid == n-1 || key < arr[mid+1]) && key == arr[mid]) 
			return mid;
		else if(key<arr[mid]) 
			end = mid-1;
		else 
			beg = mid+1;
	}
	return -1;
}

int main(){
	/*ifstream inFile;
	//inFile.open("/home/shehyaaz/Documents/Engineering/5th Semester/ADA/ADA_Lab_internals_1_programs/test.txt");
	inFile.open("./test.txt");
	if(!inFile){
		cout<<"Something unexpected has occurred"<<endl;
		return -1;
	}*/
	int num, size, key, *arr;
		cout<<"entere the size";
		cin>>size;
		arr = new int[size];
		cout<<"enter the elements";
		for(int j =0;j<size;j++) 
			cin>>arr[j];
		cout<<"enter the key";
		cin>>key;
		int first = firstIndex(arr,size,key);
		int last = lastIndex(arr,size,key);
		if(first == -1 && last == -1)
			cout<<first<<" "<<last<<" "<<0<<endl;
		else
			cout<<first<<" "<<last<<" "<<(last-first+1)<<endl;
	
	return 0;
}

 /***********************************program10***************************/
 
 #include <iostream>
using namespace std;

void printSolution(int **solution, int N){
	for(int i=0; i<N;i++){
		for(int j=0; j<N; j++)
			cout<<solution[i][j]<<"\t";
		cout<<endl;
	}//end of for
}//end of method

void ratMaze(int **maze, int **solution, int N, int x,int y){
	if(x==N-1 && y==N-1){
		solution[x][y] = 1;
		printSolution(solution,N);
		return;
	}//end of if
	if(x<0 || x>N-1 || y<0 || y>N-1 || maze[x][y]==0 || solution[x][y]==1) return;
	
	solution[x][y]=1;
	ratMaze(maze,solution,N,x,y+1); //right, i.e, forward
	ratMaze(maze,solution,N,x+1,y); //down
	
	
	solution[x][y]=0;
}//end of method

int main(){
	int N, **maze, **solution;
	cout<<"Enter size of matrix :";
	cin>>N;
	maze = new int*[N];
	for(int i =0; i<N; i++)
		maze[i] = new int[N];
	solution = new int*[N];
	for(int i =0; i<N; i++)
		solution[i] = new int[N];
	cout<<"Enter maze :\n";
	for(int i=0; i<N; i++)
		for(int j=0;j<N;j++)
			cin>>maze[i][j];
	ratMaze(maze,solution,N,0,0);
	return 0;
}//end of main
