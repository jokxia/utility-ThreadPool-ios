//
//  LSURLDispatcherThread.h
//  Lightstreamer Thread Pool Library
//
//  Created by Gianluca Bertani on 10/09/12.
//  Copyright 2013 Weswit Srl
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>


@interface LSURLDispatcherThread : NSThread {
    NSTimeInterval _loopInterval;
    
    NSTimeInterval _lastActivity;
    
    BOOL _running;
}


#pragma mark -
#pragma mark Execution control

- (void) stopThread;


#pragma mark -
#pragma mark Properties

@property (nonatomic, assign) NSTimeInterval lastActivity;


@end
