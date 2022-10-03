 #include <iostream>
 using namespace std;

 class Rectangle
{private:
 int length;
 int breadth;
 public:
 Rectangle()
{length=breadth=1;}
 Rectangle(int l,int b);
 int area();
 int perimeter();
 void setlength(int l)
{length=l;}
 int getlength()
{return length;}
 ~Rectangle();
};

 Rectangle::Rectangle(int l,int b)
{length=l;
 breadth=b;
}
 int Rectangle::area()
{return length*breadth;
}
 int Rectangle::perimeter()
{return 2*(length+breadth);
}
 Rectangle::~Rectangle()
{
}

 int main()
{Rectangle r(10,5);
 cout<<"\nArea is :- "<<r.area();
 cout<<"\nPerimeter is :- "<<r.perimeter();
 r.setlength(20);
 cout<<"\nNew value of length :- "<<r.getlength();
 return 0;
} 
