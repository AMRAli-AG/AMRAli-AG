#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef unsigned short uint16;
typedef unsigned char uint8;

struct node {
 uint32 nodedata;
 struct node *leftnodelink;
 struct node *rightnodelink;

};
struct node *dll_1 = NULL;

void insert_node_at_beginning(struct node **List ,uint32 data );
void insert_node_at_end(struct node *List ,uint32 data );
void insert_node_after(struct node *List ,uint32 data,uint32 position );
void insert_node_befor(struct node **List ,uint32 data,uint32 position );




int main()
{
    insert_node_at_beginning(&dll_1,11);


    return 0;
}

void insert_node_at_beginning(struct node **List ,uint32 data ){
    struct node *TempNode =NULL;
    TempNode =  (struct node*)malloc(sizeof(struct node));
    if(NULL==*List){
        TempNode->leftnodelink = NULL ;
        TempNode->rightnodelink = NULL ;
        *List = TempNode ;

    }
    else{
            TempNode->rightnodelink = (*List) ;
            TempNode->leftnodelink = NULL ;
           (*List)->leftnodelink = TempNode ;
            (*List) = TempNode ;

    }

void insert_node_at_end(struct node *List ,uint32 data ){
    struct node *nodelistcounterone  = NULL;
    struct node *TempNode =NULL;
    TempNode =  (struct node*)malloc(sizeof(struct node));
    if(NULL!=TempNode){

        TempNode->nodedata =data;
        TempNode->rightnodelink =NULL;
        nodelistcounterone = List ;

        while(NULL!=nodelistcounterone->rightnodelink){
               nodelistcounterone = nodelistcounterone->rightnodelink;

         }
         TempNode->leftnodelink =nodelistcounterone;
         nodelistcounterone->rightnodelink =TempNode;

    }




  }

}

void insert_node_after(struct node *List ,uint32 data,uint32 position ){
        struct node *nodelistcounterone  = NULL;
        struct node *nodelistcountertwo  = NULL;
        struct node *TempNode =NULL;
        nodelistcounterone =List;

        while(position!=1){
            nodelistcounterone = nodelistcounterone->rightnodelink;
            position--;

        }
        TempNode =  (struct node*)malloc(sizeof(struct node));
        if(NULL!=TempNode){

        TempNode->nodedata =data;
        if(NULL==nodelistcounterone->rightnodelink){
                nodelistcounterone->rightnodelink = TempNode;
                TempNode->leftnodelink=nodelistcounterone;
                TempNode->rightnodelink = NULL;

        }
        else {
                nodelistcountertwo = nodelistcounterone->rightnodelink;
                nodelistcounterone->rightnodelink = TempNode;
                nodelistcountertwo->leftnodelink = TempNode;
                TempNode->leftnodelink = nodelistcounterone;
                TempNode->rightnodelink = nodelistcountertwo;
        }


      }
}
void insert_node_befor(struct node **List ,uint32 data,uint32 position ){
        struct node *nodelistcounterone  = NULL;
        struct node *nodelistcountertwo  = NULL;
        struct node *TempNode =NULL;
        uint32 nodeposition = position;

        nodelistcounterone =(*List);
        while(nodeposition>position-1){
                nodelistcounterone =nodelistcounterone->rightnodelink;
                nodeposition--;

        }

        TempNode =  (struct node*)malloc(sizeof(struct node));
        if(NULL!=TempNode){

        TempNode->nodedata =data;}
        if(1==position){

                TempNode->leftnodelink= NULL;
                TempNode->rightnodelink = *List;
                (*List)->leftnodelink =TempNode;
              (*List)  = TempNode;

        }
        else{
            nodelistcounterone =nodelistcounterone->rightnodelink;
            nodelistcounterone->rightnodelink = TempNode;
            nodelistcounterone->leftnodelink =TempNode;
            TempNode->rightnodelink = nodelistcountertwo;
            TempNode->leftnodelink=nodelistcounterone;

        }


}




void Display_All_Nodes_Reverse(struct Node *List){
    struct Node *TempNode = List;

    printf("\nTraversal in reverse direction ==> ");
    printf("Data : ");
    while(TempNode->rightnodelink!= NULL){
        TempNode = TempNode->rightnodelink;
    }
    while(TempNode != NULL){
        printf("%d -> ", TempNode->NodeData);
        TempNode = TempNode->leftnodelink;
    }
    if(NULL == TempNode){
        printf("NULL");
    }
    printf("\n");
}


















