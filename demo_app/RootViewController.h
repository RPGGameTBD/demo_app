//
//  RootViewController.h
//  demo_app
//
//  Created by Nicholas Hyatt on 2/14/14.
//  Copyright (c) 2014 Nicholas Hyatt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GrantObject.h"
#import "GrantCell.h"
#import "LandscapeMainGraphViewController.h"

@interface RootViewController : UIViewController{
    
    __weak IBOutlet UITableView *tableGrants;
}

@property (strong, nonatomic) NSMutableArray *grants;
@property (strong, nonatomic) NSMutableArray *keys;

@end
