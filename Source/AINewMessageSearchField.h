//
//  AINewMessageSearchField.h
//  Adium
//
//  Created by Thijs Alkemade on 23-10-12.
//  Copyright (c) 2012 The Adium Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AINewMessageSearchField : NSSearchField {
	IBOutlet NSTableView *table_results;
}

@end
