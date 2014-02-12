//
//  SignUpViewController.h
//  Imprint
//
//  Created by Tim McHale on 2/7/14.
//  Copyright (c) 2014 Tim McHale. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;



- (IBAction)signUp:(id)sender;

@end
