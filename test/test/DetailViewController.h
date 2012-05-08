//
//  DetailViewController.h
//  test
//
//  Created by George Nursey on 08/05/2012.
//  Copyright (c) 2012 George Nursey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
