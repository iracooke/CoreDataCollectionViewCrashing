//
//  ItemMO.h
//  CoreDataCollectionView
//
//  Created by Ira Cooke on 21/07/2011.
//  Copyright (c) 2011 Cambridge University. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ItemMO : NSManagedObject {

}


@property (nonatomic,readonly) BOOL isUpdating;

@property (nonatomic, retain) NSNumber * progress;

@property (nonatomic, retain) NSNumber * animate;

@property (nonatomic, retain) NSNumber * indeterminate;

@end
