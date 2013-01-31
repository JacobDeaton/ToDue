//
//  ToDoListDetailViewController.h
//  ToDue
//
//  Created by JACOB DEATON on 1/31/13.
//  Copyright (c) 2013 JACOB DEATON. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoListDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
