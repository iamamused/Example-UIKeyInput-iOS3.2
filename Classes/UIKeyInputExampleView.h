//
//  EditingView.h
//  TextEditing
//
//  Created by Jeffrey Sambells on 10-04-21.
//  Copyright 2010 We-Create Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIKeyInputExampleView : UIView <UIKeyInput> {
	NSMutableString *textStore;
}

@property (nonatomic, retain) NSMutableString *textStore;

@end
