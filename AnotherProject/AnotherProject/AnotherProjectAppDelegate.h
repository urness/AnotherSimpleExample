//
//  AnotherProjectAppDelegate.h
//  AnotherProject
//
//  Created by Timothy Urness on 11/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AnotherProjectViewController;

@interface AnotherProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AnotherProjectViewController *viewController;

@end
