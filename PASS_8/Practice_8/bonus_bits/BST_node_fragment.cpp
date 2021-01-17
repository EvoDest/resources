/* Examples of various ways to configure BST nodes to store data */

//These are just some ideas. (not definite solutions)
//You will need to configure the BST based on your design


/* BST Node Fragment 1 */

node
{
    int key
    Range dateRange; //object
    Vector<data> Library //ADT
    node * left;
    node * right;
};


/* BST Node Fragment 2 */

node
{
    int id
    Vector<data> * v_ptr; //ADT ptr
    node * left;
    node * right;
};


/* BST Node Fragment 3 */

node
{
    int serialNo
    Map<data> * m_ptr; //ADT ptr
    node * left;
    node * right;
};

/* BST Node Fragment 4 */

node
{
    date d; //object key
    data_library d1; //object
    node * left;
    node * right;
};

/* BST Node Fragment 5 */

node
{
    int id;
    collection * c; //object ptr
    node * left;
    node * right;
};


/* BST Node Fragment 6 */

node
{
    data * d_ptr;//object key
    node * left;
    node * right;
};
