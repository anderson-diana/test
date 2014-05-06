//
//  MasterViewController.h
//  EPpharma
//
//  Created by Anderson Diana on 2014-05-06.
//  Copyright (c) 2014 Anderson Diana. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
