vector<int> funGame (vector<int> arr) {
    int a_index = 0;

    int b_index = arr.size()-1;

    vector<int> out;

    while(a_index < arr.size() && b_index > -1){

    //cout << "a_index: "<< a_index << " b_index: "<<b_index<< endl;

    if(arr[a_index] > arr[b_index]){

        out.push_back(1);

        b_index--;

    }
    else if(arr[a_index] < arr[b_index]){

        out.push_back(2);

        a_index++;

    }
    else{

        out.push_back(0);

        a_index++;

        b_index--;

    }

}       

    return out;

}