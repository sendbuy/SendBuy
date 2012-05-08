//
//  MasterViewController.h
//  test
//
//  Created by George Nursey on 08/05/2012.
//  Copyright (c) 2012 George Nursey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
