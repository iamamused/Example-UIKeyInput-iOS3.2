//
//  TextEditingAppDelegate.h
//  TextEditing
//
//  Created by Jeffrey Sambells on 10-04-21.
//  Copyright We-Create Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TextEditingViewController;

@interface TextEditingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TextEditingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TextEditingViewController *viewController;

@end

