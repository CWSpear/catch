//
//  FeedChecker.h
//  Catch
//
//  Created by Giorgio Calderolla on 6/12/10.
//  Copyright 2010 n\a. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Preferences.h"


@interface Scheduler : NSObject

- (BOOL)pauseResume;

- (void)forceCheck;

@end
