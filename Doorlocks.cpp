//
//  Erwin Horvath
//
//

#include <iostream>
using namespace std;

int main()
{



    // Boolean Declaration of all modules in vehicle:
    
    bool dashboard_switch_left, dashboard_switch_right, child_lock,
         left_inside_handle, left_outside_handle, right_inside_handle,
         right_outside_handle, master_unlock, gear;
    
    // Character Declaration
    
    char again = 'Y';
    char 'P','N','D','1','2','3','R';
    
    // While Loop
    
    while(again == 'Y' || again == 'y')
    {
   
    // Output to User:
        
    cout << "Please enter DL DR CL MU IL OL IR OR Gearshift" << endl; // Prompts the user to distinguish modules.
    cout << "DL = dashboard switch for left door (0 or 1) " << endl; // Output of LEFT DOOR switch.
    cout << "DR = dashboard switch for right door (0 or 1) " << endl; // Output of RIGHT DOOR switch.
    cout << "CL = child lock (0 or 1) " << endl; // Output of CHILD LOCK.
    cout << "MU = master unlock (0 or 1) " << endl; // Output of MASTER UNLOCK.
    cout << "IL = inside left door latch (0 or 1)" << endl; // Output of inside left door latch.
    cout << "OL = outside left door latch (0 or 1) " << endl; // Output of outside left door latch.
    cout << "IR = inside right door latch (0 or 1) " << endl; // Output of inside right door latch.
    cout << "OR = outside right door latch (0 or 1) " << endl;// Output of outside right door latch.
    cout << "Gearshift (P N D 1 2 3 R)" << endl; // Output of gearshift.
        
    // User Input:
        
    cin >> dashboard_switch_left >> dashboard_switch_right >> child_lock >> master_unlock >> left_inside_handle
        >> left_outside_handle >> right_inside_handle >> right_outside_handle >> gear; // User inputs digits and letter in order stated above with "one" space between each character.
        
    //Scenario 1
    
        if (dashboard_switch_left==1) // If user enters the digit for DL.
        
        if (dashboard_switch_right==1) // If user enters the digit for DR.
            
        if (child_lock==1) // If user enters the digit for CL.
                
        if (master_unlock==1) // If user enter the digit for MU.
            
        if (left_inside_handle==1) // If user enters the digit for IL.
            
        if (left_outside_handle==1) //If user enters the digit for OL.
        
        if (right_inside_handle==1) // If user enters the digit for IR.
            
        if (right_outside_handle==1)// If user enters the digit for OR.
            
        if (gear==D) // If user enters letter for gear.
        
    cout << "Both doors stay closed." << endl; // Prompt user that both doors will stay closed.
    cin.clear(); // cin.clear to break loop.
    cin. clear(); // cin. clear to break loop
    cin >> again; // User enters Y in order to continue simulation. User enters N and program will exit.
    if (again == 'Y' || again == 'y') // if statement again equals yes.
    
    
    
    
    // Scenario 2
    
        if (dashboard_switch_left==1) // If user enters the digit for DL.
        
        if (dashboard_switch_right==1) // If user enters the digit for DR.
            
        if (child_lock==1) // If user enters the digit for CL.
                
        if (master_unlock==1) // If user enter the digit for MU.
                    
        if (left_inside_handle==1) // If user enters the digit for IL.
                        
        if (left_outside_handle==1) //If user enters the digit for OL
                            
        if (right_inside_handle==1) // If user enters the digit for IR.
                                
        if (right_outside_handle==1)// If user enters the digit for OR.
            
        if (gear==P) // If user enters letter for gear.
        
    cout << "Both doors stay closed." << endl; // Prompt user that both doors will stay closed.
    cin.clear(); // cin.clear to break loop.
        
        
        
    // Scenario 3
        
        if (dashboard_switch_left==1) // If user enters the digit for DL.
            
        if (dashboard_switch_right==0) // If user enters the digit for DR.
                
        if (child_lock==0) // If user enters the digit for CL.
                    
        if (master_unlock==0) // If user enter the digit for MU.
                        
        if (left_inside_handle==1) // If user enters the digit for IL.
                            
        if (left_outside_handle==1) //If user enters the digit for OL
                                
        if (right_inside_handle==0) // If user enters the digit for IR.
                                    
        if (right_outside_handle==0)// If user enters the digit for OR.
                                        
        if (gear==P) // If user enters letterfor gear.
                                            
    cout << "Right door opens." << endl; // Prompt user that both doors will stay closed.
    cin.clear(); // cin.clear to break loop.
        
        
        
    // Scenario 4
        
        if (dashboard_switch_left==0) // If user enters the digit for DL.
            
        if (dashboard_switch_right==0) // If user enters the digit for DR.
                
        if (child_lock==0) // If user enters the digit  for CL.
                    
        if (master_unlock==0) // If user enter the digit  for MU.
                        
        if (left_inside_handle==0) // If user enters the digit for IL.
                            
        if (left_outside_handle==0) //If user enters the digit for OL
                                
        if (right_inside_handle==0) // If user enters the digit for IR.
                                    
        if (right_outside_handle==0)// If user enters the digit for OR.
                                        
        if (gear==P) // If user enters letter for gear.
                                            
    cout << "ALL DOORS OPEN!" << endl; // Prompt user that both doors will stay closed.
    cin.clear(); // cin.clear to break loop.
        
        
   
   
  
  // Scenario 5
    
        if (dashboard_switch_left==0) // If user enters the digit  for DL.
        
        if (dashboard_switch_right==0) // If user enters the digit for DR.
            
        if (child_lock==0) // If user enters the digit for CL.
                
        if (master_unlock==1) // If user enter the digit for MU.
                    
        if (left_inside_handle==0) // If user enters the digit for IL.
                        
        if (left_outside_handle==1)//If user enters the digit for OL
                            
        if (right_inside_handle==0)// If user enters the digit for IR.
                                
        if (right_outside_handle==0)// If user enters the digit for OR.
                                    
        if (gear== P) // If user enters letter for gear.
            
    cout << "Left door opens." << endl; // Prompt user that left door opens.
        cout << endl;
     // Prompts user to do it again.
    cin.clear(); // cin.clear break loop.
    cin.clear(); // cin. clear break loop.
    cin >> again; // User input Y to continue simulation. User input N to exit program.
    
    } // end while loop
    
    
    
    
    
    //END OF PROGRAM!
    
    
    
    
    return 0;
}
