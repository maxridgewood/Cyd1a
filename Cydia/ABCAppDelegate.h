//
//  ABCAppDelegate.h
//  Cydia
//
//  Created by Testing on 12/20/12.
//  Copyright (c) 2012 Testing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ABCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
