int main()
{
    int n;
    int i;
    int j;
    int p=n-1;
    string linea;

    ofstream fichero("triangulos.txt");
    cout<<"Dime un numero de asteriscos para hacer el triangulo:";
    cin>>n;
    for(i=0; i<n; i++)
    fichero<<"#";
    fichero.close();
