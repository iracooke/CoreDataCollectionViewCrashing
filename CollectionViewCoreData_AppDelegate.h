//
//  CollectionViewCoreData_AppDelegate.h
//  CollectionViewCoreData
//
//  Created by Ira Cooke on 22/07/11.
//  Copyright __MyCompanyName__ 2011 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CollectionViewCoreData_AppDelegate : NSObject 
{
    NSWindow *window;
	
	NSMutableArray *itemsArray;
	
	IBOutlet NSArrayController *itemArrayController;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:sender;
- (IBAction) clear:sender;

@end
