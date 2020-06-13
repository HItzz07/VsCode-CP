#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
#include<utility>
#include<typeinfo>
#include<sstream>

#define tr(c,i) for(typeof(c.begin()) i = c.begin(); i != c.end(); i++)

using namespace std;

bool f(int x, int y){
    return x<y;
}

bool even(const int& value) { return (value % 2) == 0; } 

void noOfEachChar(){
    string str;
    cin>>str;
    map<char , int> m1;
    for(char c:str){
        m1[c]++;
    }
    map <char , int >:: iterator it;
    
    for(it = m1.begin() ; it != m1.end() ;it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void vectorAll(){

//quickNOtes
    //v.reserve(1050);->sets the size to 1050 and push_back() does not extends the size until
    // ->the reserved size is reached


    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //v.clear(); deletes all the elemnts still maintaining the size of the vector   
    // v.resize(8);

    //Note that if you use push_back() after resize(),
    // it will add elements AFTER the newly allocated size,
    // but not INTO it. In the example above the size of the resulting 
    //vector is 25, while if we use push_back() in a second loop, it would be 30.
    cout<<v.size()<<" "<<v.empty()<<" "<<v[0]<<" " ;
    cout<<v.capacity();

    cout<<endl;
    vector < int > v2 = v;
    //initializes vector v2 with v but the size and capacity of 
    //v2 remains same as no of elemnts nut are different in case of v
    cout<<v2.size()<<" "<<v2.empty()<<" "<<v2[0]<<" " ;
    cout<<v2.capacity();
    cout<<endl;

    vector < int > v3(v);
    //another method of intialisation but same features as that of v2 
    cout<<v3.size()<<" "<<v3.empty()<<" "<<v3[0]<<" " ;
    cout<<v3.capacity();
    cout<<endl;

    
    //initializing vector with value
    vector <int > v4(20 , 5);
    cout<<v4.size()<<" "<<v4.empty()<<" "<<v4[15]<<" " ;
    cout<<v4.capacity();
    cout<<endl;    

    //another eg:-
    vector < string > v5(20 , "hello");
    cout<<v5.size()<<" "<<v5.empty()<<" "<<v5[15]<<" " ;
    cout<<v5.capacity();
    cout<<endl;    
    

    //2D vectors or vector of vectors
    int n =3,m=2;
    vector < vector < int > > twoDVec(n,vector <int >(m,1)); //initializes 2d vector with value 1
    
    for (int i=0;i<n;i++){
        vector <int > we(m);
        for (int j=0; j<m ; j++){

            cin>>twoDVec[i][j]; 
        }

    }

    // twoDVec.resize(20 , vector< int >(13));
    // cout<<twoDVec.size();

    for (int i =0;i<n;i++){
        for(int j=0;j<m;j++){
        
            cout<<twoDVec[i][j];
        
        }
        cout<<endl;
    }

    //another method to insert value in the 2d vec
    for (int i=0;i<n;i++){
        vector <int > we(m);
        for (int j=0; j<m ; j++){    
            we.push_back(3);
        }
        twoDVec.push_back(we);
    }

}

void pairAll(){
    vector < pair <char , pair<int ,int > > > pr (3); 
    
    cin>>pr[0].first;
    cin>>pr[0].second.first;
    cin>>pr[0].second.second;
    

    cout<<pr[0].first;
    cout<<pr[0].second.first;
    cout<<pr[0].second.second;
    
}

void stlString(){

//here we are not using iterators    
    string name = "hiteshkumarsahu";
    string
    s1 =name.substr(0,6),
    s2 =name.substr(6,11),
    s3 =name.substr(11,name.length() -1);

    cout<<s1.length() + 23;
    //Beware of (s.length()-1) on empty string because s.length() is unsigned and unsigned(0) – 1 is definitely not what you are expecting!
    cout<<s1<<" "<<s2<<" "<<s3;
    cout<<endl;


}

void reverseArrayIterators(){
vector <int> v ={1,2,3,4,5,6,7,8,9};
vector <int >::iterator first,last;

first = v.begin();
last  = v.end()-1;
cout<<"size   "<<v.size()<<endl;
while(first < last){
    cout<<*first<<" "<<*last<<endl;
    swap(*first , *last);
    first++;
    last--;
}

for(first = v.begin() ; first != v.end() ; first++){
    cout<<*first<<" ";
}
cout<<endl;

// //similar function using index and pointers
// void reverse_array_simple(int *A, int N) {
// int first = 0, last = N-1; // First and last indices of elements to be swapped
// while(first < last) { // Loop while there is something to swap
// swap(A[first], A[last]); // swap(a,b) is the standard STL function
// first++; // Move first index forward
// last–; // Move last index back
// }
// }
//
// void reverse_array(int *A, int N) {
// int *first = A, *last = A+N-1;
// while(first < last) {
// swap(*first, *last);
// first++;
// last–;
// }
// }
}

void iteratorsAll(){
    int data[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
vector< int > primes(data, data+(sizeof(data) / sizeof(data[0])));


//creating the vector half the size of the primes vector
vector< int > v2(primes.begin() , primes.begin() + (primes.size()/2));


//creating the vector half the size in reverse order
vector < int > v3 (primes.rbegin() + (primes.size()/2) , primes.rend());
//here rend() returns the starting vector rbegin() points to last of the vector ,
//  adding value to it moves the iterator hat much value left 





//finding an element in  v2 , 
// if found it returns iterator to te element else it returns v2.end()  

vector <int >:: iterator findIt;
findIt = find(v3.begin() , v3.end() , 114);
//An alternate method to find// findIt = v3.find(3);
cout<<"finding here  "<< *findIt <<endl;
// |
// |
// ^
// getting the index of the element found
int i = find(v3.begin(), v3.end(), 49) - v3.begin();

cout<<"printing with the help of the index  "<<i<<"-->"<<v3[i]<<endl;




//finding max element from an vector
    int data1[5] = { 1, 5, 2, 4, 3 };
    vector< int > X(data1, data1+5);
    int max1 = *max_element(X.begin(), X.end()); // Returns value of max element in vector
    int min1 = *min_element(X.begin(), X.end());  // Returns value min element in vector
   
    // int min2 = min_element(X.begin(), X.end()) – X.begin(); // Returns index min element in vector
    // Iterator it1 = std::max_element (v1.begin(), v1.end());

    cout<<"max element ->"<<max1<<endl;
    cout<<"min element ->"<<min1<<endl;
    
//     //using arr
//     int v2 = *max_element(data, data+5); // Returns value of max element in array
// int i3 = min_element(data, data+5) – data; // Returns index of min element in array


//we can also use this for arr by invluding algorithm header
	int v[] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 };
	int* i1; 
	i1 = std::min_element(v + 2, v + 5); 
	cout << *i1 << "\n"; 




reverse(data+2,data+7); //reverses the array data form 3rd element till 8the element
// reverse(primes.begin()+2 , primes.begin()+7);  //to reverse the array
for(int i=0;i<primes.size();i++){
    cout<<primes[i]<<" ";
}

cout<<endl;

for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}
}

void permutationFunc(){
    
//on integer vectors    
    vector <int> vv = {1,2,3,4,5,6};
    next_permutation(vv.begin() , vv.end());
    for(int i=0 ; i<vv.size() ; i++){
        cout<<vv[i]<<" ";
    }
    next_permutation(vv.begin() , vv.end());
        for(int i=0 ; i<vv.size() ; i++){
        cout<<vv[i]<<" ";
    }
    prev_permutation(vv.begin() , vv.end());
     
    for(int i=0 ; i<vv.size() ; i++){
        cout<<vv[i]<<" ";
    }


//using char array
char c[]="abcde";
    next_permutation(c,c+5);
        cout<<c;



//to find minmax element 
    // auto result = minmax_element(vv.begin(), vv.end());
    // cout<<*result.first<<" "<<*result.second;
   
    cout<<endl;

}

void dataManipulation(){
        vector <int > v ={1,2,3,4,5};
        vector <int > v2 = {23,34,45,56,};

//insert into a vector using iterator
    v.insert(v.begin()+2 , 987);  //insert 44 after 2nd element
    v.insert(v.begin()+3, 5, 4);      //insert 5 4's after 3rd element

//insert another vector into a vector using iterator
        v.insert(v.begin()+2 , v2.begin(),v2.end() );

//erasing element from vector
    v.erase(v.begin()+3);

//erase interval of element form the vectors
    v.erase(v.begin()+3 ,v.begin()+7 );            
        
    for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
}

void setAll(){
//     Set
// It’s always hard to decide which kind of container to describe first – set or map. My opinion is that, if the reader has a basic knowledge of algorithms, beginning from ‘set’ should be easier to understand.
// Consider we need a container with the following features:
// add an element, but do not allow duples [duplicates?]
// remove elements
// get count of elements (distinct elements)
// check whether elements are present in set
// This is quite a frequently used task. STL provides the special container for it – set. Set can add, remove and check the presence of particular element in O(log N), where N is the count of objects in the set. While adding elements to set, the duples [duplicates?] are discarded. A count of the elements in the set, N, is returned in O(1). We will speak of the algorithmic implementation of set and map later — for now, let’s investigate its interface:
// set< int > s;

    set <int> s;
//insertion into set
    for(int i = 1; i <= 100; i++) {
        s.insert(i); // Insert 100 elements, [1…100]
    }

//we cannot insert 42 again into the set as it already contains 42 and does not allow duplicate    
    //elements automatically get sorted
    s.insert(-1);


//printing the elements of te set
    //  Since set is not a linear container, it’s impossible to take the element in 
    // set by index. Therefore, the only way to traverse the elements of set is to use iterators.
        set <int >::iterator sit;
    for(sit = s.begin() ; sit !=s.end(); sit++) {
        cout<<*sit<<" "; // Insert 100 elements, [1…100]
    }


//erasing the elements from the set
    for(int i = 2; i <= 100; i += 2) {
        s.erase(i); // Erase even values
    }    

    int i = s.size();
    cout<<"remaining size of i "<<i;

//find element in the set
    cout<<endl;
    if(s.find(42) != s.end()) 
    cout<<"42 present in set"<<endl ;
    else 
    cout<<"42 not presents in set"<<endl; 

//find element using count here count counts teh no of element oresent in the set
    if(s.count(65)) 
    cout<<"65 present in set"<<endl ;
    else
    cout<<"65 not present in set"<<endl ;


//using macros
#define present(container, element) (container.find(element) != container.end())  //for set/map
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vector

if(present(s,99))
    cout<<"Present 99"<<endl;


//erasing elements form the set
s.erase(29);

//erasing in interval
    set<int > :: iterator it1,it2;
    it1 = s.find(77);
    it2 = s.find(93);
    s.erase(it1,it2);
    //// printing element
        for(sit = s.begin() ; sit !=s.end(); sit++) {
        cout<<*sit<<" "; // Insert 100 elements, [1…100]
    }

//Something like typecasting
    cout<<endl<<endl;
    vector< int > v = {23,33,1,2,5,65,22};
    set< int > s1(v.begin() , v.end());
    //after typecasting it into a set we get sorted and distinct elements
    vector< int > v2(s1.begin() , s1.end());

    for(auto ity = v2.begin() ; ity!=v2.end();ity++){
        cout<<*ity<<" ";
    }
    cout<<endl;



// for traversing complex set v=we use macros
//     #define tr(container, it) \
//     for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
//
//     set< pair< string, pair< int, vector< int > > > > SS;
//     int total = 0;
//     tr(SS, it) {
//     total += it->second.first;
//     }    


}

void mapAll(){
    //map can suse []
    map <string ,int> m;

    m["a"] = 1;
    m["b"] = 2;
    m["c"] = 3;

    cout<<m["b"]<<" ";


//using
    int x =m["a"] + m["c"];
    cout<<x<<" ";


//erasing 
    m.erase("c");
    m.erase(m.find("b"));

//find
    if(m.find("b") != m.end())
        cout<<" found "<<m["a"]<<endl;
    else 
        cout<<"Not found"<<endl;    
m["b"] = 2;
m["c"] = 3;
m["d"] = 4;
m["e"] = 5;
m["f"] = 6;
m["g"] = 7;

//printing map values
    map<string , int> ::iterator mit;

    for (mit  = m.begin() ; mit!=m.end() ; mit++){
        cout<<mit -> first <<" : "<<mit->second<<" "<<endl;
    }

//While map::find() will never change the contents of map, 
// operator [] will create an element if it does not exist
//Prefer find over [] in map

//here h is not present so it creates a new key with value 0        
    if(m["h"])
        cout<<"h present"<<endl;
    else    
        cout<<"h not present"<<endl;

    if(m.find("h") != m.end())
        cout<<"h present"<<endl;
    else    
        cout<<"h not present"<<endl;



}

void stl1Summary(){
//     Summary
// To go on with STL, I would like to summarize the list of templates to be used. This will simplify the reading of code samples and, I hope, improve your Topcoder skills. The short list of templates and macros follows:

// typedef vector< int > vi;
// typedef vector< vi > vvi;
// typedef pair< int,int > ii;
// #define sz(a) int((a).size())
// #define pb push_back
// #defile all© ©.begin(),©.end()
// #define tr(c,i) for(typeof(©).begin() i = ©.begin(); i != ©.end(); i++)
// #define present(c,x) (©.find(x) != ©.end())
// #define cpresent(c,x) (find(all©,x) != ©.end())

// The container vector< int > is here because it’s really very popular. Actually, I found it convenient to have short aliases to many containers (especially for vector< string >, vector< ii >, vector< pair< double, ii > >). But this list only includes the macros that are required to understand the following text.

// Another note to keep in mind: When a token from the left-hand side of #define appears in the right-hand side, it should be placed in braces to avoid many nontrivial problems.
}

void justForInfoOfStringStreams(){

//     void f1(string s) {
//     // You often need to do some string processing/input/output. C++ provides two interesting objects for it: ‘istringstream’ and ‘ostringstream’. They are both declared in #include < sstream >.
//     // Object istringstream allows you to read from a string like you do from a standard input. It’s better to view source:

//     // Construct an object to parse strings
//     istringstream is(s); 
//     // Vector to store data
//     vector< int > v; 
//     // Read integer while possible and add it to the vector
//     int tmp;
//     while(is >> tmp) {
//         v.push_back(tmp);
//     }
// }

// string f2(const vector< int >& v) {
//     // The ostringstream object is used to do formatting output. Here is the code:
//     // Constuct an object to do formatted output
//     ostringstream os; 

//     // Copy all elements from vector< int > to string stream as text
//     tr(v, it) {
//     os << ' '<< *it;
//     } 

//     // Get string from string stream
//     string s = os.str(); 

//     // Remove first space character
//     if(!s.empty()) { // Beware of empty string here
//     s = s.substr(1);
//     } 

//     return s;
// }
    
}

void stringStream(){
//we can use stringstream only in place of istringstream and ostringstreams
//printing the no of  words present in the string
    string str;
    string word;
    cout<<"Enter the string:- ";
    getline(cin , str);
    int count = 0;

    stringstream s(str);

    while(s >> word){   //putting each words into the word variable
        count++;
    }

    cout<<count<<endl;



//checking the frequency of each word in the string
    map <string , int> fw;
    string str1;
    string word1;
    cout<<"Enter the string:- ";
    getline(cin , str1);
    int count1 = 0;
 
    stringstream s1(str1);

    while(s1 >> word1)   //putting each words into the word variable
        fw[word1]++;

    map <string , int >::iterator mit;
    for(mit = fw.begin() ; mit != fw.end() ; mit++){
        cout<<mit->first<<" : "<<mit->second<<endl;
    }



//using istringstream and  ostringstream
//istringstream is used to take string as input     (string -> values)
    string str2;
    cout<<"Enter the string here:-";
    getline(cin , str2);
    
    istringstream is(str2);
    vector <int> vv;
    int tmp;
    //taking a value from the is putting it in the tmp and then insertign it to the vec
    while(is >> tmp){
        vv.push_back(tmp);
    }
    
    vector <int >::iterator vit;
    // for(vit = vv.begin() ; vit!=vv.end() ; vit++){
    //     cout<<*vit<<endl;
    // }

//ostringstream is used for formattign the output      (values -> string)
    ostringstream os;
    //using the above created vector iterator
    for (vit = vv.begin() ; vit != vv.end() ; vit++){
        //putting values from vit into ostringstream object
        os<<' ' <<*vit;
    }

    //getting string from ostringstream object
    string str3 = os.str();
 
// Remove first space character
    if(!str3.empty()) { // Beware of empty string here
        str3 = str3.substr(1);
    }

    cout<<str3;        

}

void vectorFromMap(){
    map <string ,int> m1;
    m1["hitesh"] = 19;
    m1["hitzz"] = 97;
    m1["Hitzz"] = 95;

    vector<pair <string , int  > > v1 (m1.begin() , m1.end()); 
    
    for(auto it = v1.begin() ; it != v1.end() ; it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }

}

void copyingDataBetweenContainers(){
    vector <int > v1 ={1,2,3,4,5};
    vector <int > v2 = {11,22,33,44,55};   
    
    //resizing
    v1.resize(v1.size() + v2.size());

    //copying
    copy(v2.begin() , v2.end() ,v1.end() - v2.size()  );  //now v1's size got increased so we have to do it this way

    //copying values of v2 in reverse order
    copy(v2.rbegin() , v2.rend() ,v1.end() - v2.size()  );  //now v1's size got increased so we have to do it this way

    //printing values
    for(auto it = v1.begin() ; it != v1.end() ; it++){
        cout<<*it<< " ";
    }
    cout<<endl;




    // //alternate approach
    // // Another good feature to use in conjunction with copy is inserters. I will not describe it here due to limited space but look at the code:
    // vector< int > v;
    // // …
    // set< int > s;
    // // add some elements to set
    // copy(all(v), inserter(s));
    // //
    // // The last line means:
    // //
    // tr(v, it) {
    // // remember traversing macros from Part I
    // s.insert(*it);
    // }


}

void mergingLists(){
//Quick Notes    
// union’ the lists, R = A+B                ->set_union(…)   
// intersect the lists, R = A*B             ->set_intersection(…)
// set difference, R = A*(~B) or R = A-B    ->set_difference(…)
// set symmetric difference, R = A XOR B    ->set_symmetric_difference(…)    

//eg1:-end_result = set_intersection(begin1, end1, begin2, end2, begin_result);
// Here [begin1,end1] and [begin2,end2] are the input lists.
//  The ‘begin_result’ is the iterator from where the result will be written.
//  But the size of the result is unknown, so this function returns the 
// end iterator of output (which determines how many elements are in the result).
//  See the example for usage details:





//using vectors

    int data1[] = { 1, 3, 5, 7, 9, 9, 11 };
    int data2[] = { 0, 2,3,5,7, 4, 6, 8, 10, 12 };

    //for set_intersection to work we have to have elements in sorted order
    vector< int > v1(data1, data1+sizeof(data1)/sizeof(data1[0]));
    vector< int > v2(data2, data2+sizeof(data2)/sizeof(data2[0]));

    vector< int > tmp(max(v1.size(), v2.size()));  //initializing vector with some size

    // to count the no of elements
    // int cnt = set_intersection(v1.begin() ,v1.end() , v2.begin() , v2.end() ,tmp.begin()) – tmp.begin();

    vector <int >res = vector <int >(tmp.begin(),set_intersection(v1.begin() ,v1.end() , v2.begin() , v2.end() ,tmp.begin()));
    //here the set_intersection returns the tmp.end() and we have already tmp.begin()


    for(auto it = res.begin() ; it != res.end() ; it++){
        cout<<*it<< " ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;








//using sets as we need to data to be sorted in order tot perform these operations
    set< int > s1, s2;
    for(int i = 0; i < 50; i++) {
    s1.insert(i*(i+1) % 1000);
    s2.insert(i % 1000);
    } 

    static int temp[5000]; // greater than we need   //temp is the starting address


    //here are we are getting end() from set_sym_diff and we already have begin(),
    //and that way we get whole vector from the array in which it is stored.
        vector< int > res1 (temp, set_symmetric_difference(s1.begin() , s1.end() , s2.begin()  , s2.end(), temp));
        // int cnt = set_symmetric_difference(s1.begin() , s1.end() , s2.begin()  , s2.end(), temp) – temp;

    for(auto it = res1.begin() ; it != res1.end() ; it++){
        cout<<*it<< " ";
    }
    cout<<endl;

}

void calculatingAlgorithms(){
//1.accumulate()  ->returns sum of elements in a vector
    //1.float sum  = accumulate(v1.begin() , v1.end() , (int)0 );
    //2.double product = accumulate(all(v), double(1), multiplies< double >());
    //3.int r = inner_product(all(v1), v2.begin(), 0);

//sum
    vector <float > v1={1,2,3,4,5,6,7.5,8,9,10} ;

    float sum  = accumulate(v1.begin() , v1.end() , (int)0 ); //here 0 represents that the result will be integer and stored into an integer 
                                                    //we can specify the result datatype in the parenthesis before 0                 
    cout<<" sum is "<<sum<<endl;

//product using accumulate
    double prod = accumulate(v1.begin() , v1.end() , (double)1 , multiplies<double>());
    cout<<" prod is "<<prod<<endl;


//inner product  ->scalar product of two intervals
    vector< int > v5;
    vector< int > v6;
    for(int i = 0; i < 3; i++) {
        v5.push_back(10-i);
        v6.push_back(i+1);
        }
    //‘r’ will hold (v1[0]v2[0] + v1[1]v2[1] + v1[2]v2[2])
    int r  = inner_product(v5.begin() , v5.end() , v6.begin() ,(int)0);
    cout<<"inner product is "<<r<<endl;

//also
    
    int r1  = inner_product(v5.begin() , v5.end() , v5.rbegin() ,(int)0);
    cout<<"inner product with itself in opp order is "<<r1<<endl;


//extra but imp
    // It should be clear to you now that inner_product requires only increment operation from iterators, so queues and sets can also be used as parameters. Convolution filter, for calculating the nontrivial median value, could look like this:

    // set< int > values_ordered_data(all(data));
    // int n = sz(data); // int n = int(data.size());
    // vector< int > convolution_kernel(n);
    // for(int i = 0; i < n; i++) {
    // convolution_kernel[i] = (i+1)*(n-i);
    // }
    // double result = double(inner_product(all(ordered_data), 
    // convolution_kernel.begin(), 0)) / accumulate(all(convolution_kernel), 0);    


}

void typedefined(){
    // typedef vector< int > vi;
    // typedef vector< vi > vvi;
    // typedef pair< int,int > ii;
    // #define sz(a) int((a).size())
    // #define pb push_back
    // #define all© ©.begin(),©.end()
    // #define tr(c,i) for(typeof(©).begin() i = ©.begin(); i != ©.end(); i++)
    // #define present(c,x) (©.find(x) != ©.end())
    // #define cpresent(c,x) (find(all©,x) != ©.end())


}

void printList(list <int > g){

    list <int >::iterator it;
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
        cout << '\n';
}

void listAll(){
//Lists are sequence containers that allow non-contiguous memory allocation. 
// As compared to vector, list has slow traversal, but once a position has been found,
//  insertion and deletion are quick. Normally, when we say a List,
//  we talk about doubly linked list. For implementing a singly linked list,
//  we use forward list.    
 

    list <int> :: iterator it;
    list<int >g={1,2,3,4,5,67,8}; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 


        cout << "\ngqlist1.front() : " << g.front(); 
    cout << "\ngqlist1.back() : " << g.back(); 

//pop_front  
    cout << "\npop_front() : "<<g.front()<<endl; 
    g.pop_front();

//pop_back  
    cout << "pop_back() : "<<g.back()<<endl; 
    g.pop_back(); 

//reverse
    cout << "reverse() : "; 
    g.reverse(); 
    printList(g);

//sort
    cout << "sort() : "; 
    g.sort(); 
       printList(g);

//push_front
    g.push_front(12);
    cout << "push_front(12) : "; 
        printList(g);

//push_back
    g.push_back(23); 
    cout << "push_back(23) : "; 
    printList(g);

//empty
    cout<<"the list g is empty:-"<<g.empty()<<endl;

//assign   using this clears all elements of the list
    // g.assign(4,7);    // assign list 7 occurrence of 4's

//advance
    advance(it , -2);  //advance the current position of iterator to 2 pos back    

//insert
    g.insert(it , 123);
        printList(g);

//erase 
    it = g.begin();
    g.erase(it);    

//remove           does the same job as that of erase but does not require iterator
    g.remove(123);
        printList(g);

//remove_if         ->it takes a boolean function in which you put your condition
    // Predicate implemented as a function 
    // bool even(const int& value) { return (value % 2) == 0; } 
     g.remove_if(even);    
        printList(g);

//unique   ->remove all duplicates
    g.unique();
        printList(g);

//maxsize    max no of elements a list can hold
    cout<<g.max_size()<<endl;            

//sort
    g.sort();
        printList(g);

//resize
    g.resize(7 , 45);
        printList(g);

//size()
    cout<<g.size()<<endl;

//emplace_front   -> inserts element at the begining of the list
    g.emplace_front(111);

//emplace_back     -> inserts element at the end of the list 
    g.emplace_back(888);        
            printList(g);



//clear            ->to destroy all elements of the list
    // g.clear();



//= operator      ->replaces all elemnts of list1 with that of list 2
    // list<int> mylist1{ 1, 2, 3 }; 
    // list<int> mylist2{ 3, 2, 1, 4 }; 
    // mylist1 = mylist2; 


//swap            ->to swap the elements of the two lists
    //  mylist1.swap(mylist2);   


//splice

//     list1_name.splice (iterator position, list2)
//                 or 
// list1_name.splice (iterator position, list2, iterator i)
//                 or 
// list1_name.splice (iterator position, list2, iterator first, iterator last)
    
    list<int> l1 = { 1, 2, 3 }; 
    list<int> l2 = { 4, 5 }; 
    list<int> l3 = { 6, 7, 8 }; 
  
    // transfer all the elements of l2 
    l1.splice(l1.begin(), l2);   //l1.begin()  is the pos where we start aading
            printList(l1);

//merge
    l2.merge(l3);
            printList(l2);

    // also //  list1.merge(list2, comparator);     

//emplace
    // inserts at the beginning of the list 
    l1.emplace(l1.begin(), 1234);
    printList(l1); 




    // Functions used with List:
//
// front() – Returns the value of the first element in the list.
// back() – Returns the value of the last element in the list .
// push_front(g) – Adds a new element ‘g’ at the beginning of the list .
// push_back(g) – Adds a new element ‘g’ at the end of the list.
// pop_front() – Removes the first element of the list, and reduces size of the list by 1.
// pop_back() – Removes the last element of the list, and reduces size of the list by 1
// list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first element of the list
// end()– end() function returns an iterator pointing to the theoretical last element which follows the last element.
// list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
// list cbegin() and cend() function in C++ STL– cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
// list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
// empty() – Returns whether the list is empty(1) or not(0).
// insert() – Inserts new elements in the list before the element at a specified position.
// erase() – Removes a single element or a range of elements from the list.
// assign() – Assigns new elements to list by replacing current elements and resizes the list.
// remove() – Removes all the elements from the list, which are equal to given element.
// list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
// reverse() – Reverses the list.
// size() – Returns the number of elements in the list.
// list resize()function in C++ STL– Used to resize a list container.
// sort() – Sorts the list in increasing order.
// list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold.
// list unique() in C++ STL– Removes all duplicate consecutive elements from the list.
// list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
// list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.
// list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents.
// list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.
// list splice() function in C++ STL– Used to transfer elements from one list to another.
// list merge() function in C++ STL– Merges two sorted lists into one
// list emplace() function in C++ STL– Extends list by inserting new element at a given position.


}

int main(){
    // noOfEachChar();
    // vectorAll();
    // pairAll();
    // reverseArrayIterators();
    // iteratorsAll();
    // permutationFunc();
    // dataManipulation();
    // stlString();
    // setAll();
    // mapAll();
    // stringStream();
    // vectorFromMap();
    // copyingDataBetweenContainers();
    //mergingLists();
    // calculatingAlgorithms();
    listAll();
    



//notes


// typeof(a+b) x = (a+b) makes the x of type (a+b)
//To determine the type of something
    // vector <int >:: iterator it; 
    // std::cout << "  i is: " << typeid(it).name() << '\n';

}

