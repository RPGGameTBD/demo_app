//
//  GrantCell.h
//  demo_app
//
//  Created by Nicholas Hyatt on 2/14/14.
//  Copyright (c) 2014 Nicholas Hyatt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GrantCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *labelName;
@property (weak, nonatomic) IBOutlet UILabel *labelEndDate;
@property (weak, nonatomic) IBOutlet UILabel *labelRemaining;

@end
