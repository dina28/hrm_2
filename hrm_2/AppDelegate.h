//
//  AppDelegate.h
//  hrm_2
//
//  Created by Kazi Sharmin Dina on 11/30/15.
//  Copyright © 2015 Kazi Sharmin Dina. All rights reserved.
//

#import <UIKit/UIKit.h>
<<<<<<< HEAD
#import <CoreData/CoreData.h>
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
=======

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

>>>>>>> cc4ea4f... 47023_employee_screen_designI

@end

