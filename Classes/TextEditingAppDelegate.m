//
//  TextEditingAppDelegate.m
//  TextEditing
//
//  Created by Jeffrey Sambells on 10-04-21.
//  Copyright We-Create Inc. 2010. All rights reserved.
//

#import "TextEditingAppDelegate.h"
#import "TextEditingViewController.h"

@implementation TextEditingAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
