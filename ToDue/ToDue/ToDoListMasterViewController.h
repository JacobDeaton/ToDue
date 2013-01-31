//
//  ToDoListMasterViewController.h
//  ToDue
//
//  Created by JACOB DEATON on 1/31/13.
//  Copyright (c) 2013 JACOB DEATON. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoListMasterViewController : UITableViewController

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
