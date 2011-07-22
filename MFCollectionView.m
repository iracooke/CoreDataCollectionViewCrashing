//
//  MFCollectionView.m
//  DropSync
//
//  Created by Ira Cooke on 21/12/2010.
//  Copyright 2010 Mudflat Software. All rights reserved.
//

#import "MFCollectionView.h"
#import "MFCollectionItemView.h"


@implementation MFCollectionView

//! Setup the collectionviewitem. Actually we used this to set the item on its view so we can retrieve it later
- (NSCollectionViewItem *)newItemForRepresentedObject:(id)object {
		
	NSCollectionViewItem *item = [super newItemForRepresentedObject:object];
	
	[(MFCollectionItemView*)[item view] setCollectionViewItem:item];
	
	return item;
}


@end
