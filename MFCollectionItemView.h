//
//  PreviewItemView.h
//  DropSync
//
//  Created by iracooke on 17/07/2009.
//  Copyright 2009 Mudflat Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MFCollectionItemView : NSView {
	
	// Importantly, this is a weak reference to the controlling NSCollectionviewItem, otherwise we end up with a retain cycle. See property below declared (assign)
	NSCollectionViewItem *collectionViewItem;
	
}

@property (assign) NSCollectionViewItem *collectionViewItem;

@end
