//
//  InterfaceController.h
//  WatchApp Extension
//
//  Created by Ravin Sardal on 9/27/15.
//  Copyright © 2015 Ravin Sardal. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>
#import <WatchConnectivity/WatchConnectivity.h>


@interface InterfaceController : WKInterfaceController
@property (strong, nonatomic) IBOutlet WKInterfaceLabel *messageLabel;

@end
