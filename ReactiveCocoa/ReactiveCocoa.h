//
//  ReactiveCocoa.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveCocoa.
FOUNDATION_EXPORT double ReactiveCocoaVersionNumber;

//! Project version string for ReactiveCocoa.
FOUNDATION_EXPORT const unsigned char ReactiveCocoaVersionString[];

#import "ReactiveCocoa/Objective-C/extobjc/EXTKeyPathCoding.h"
#import "ReactiveCocoa/Objective-C/extobjc/EXTScope.h"
#import "ReactiveCocoa/Objective-C/NSArray+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSData+RACSupport.h"
#import "ReactiveCocoa/Objective-C/NSDictionary+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSEnumerator+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSFileHandle+RACSupport.h"
#import "ReactiveCocoa/Objective-C/NSNotificationCenter+RACSupport.h"
#import "ReactiveCocoa/Objective-C/NSObject+RACDeallocating.h"
#import "ReactiveCocoa/Objective-C/NSObject+RACLifting.h"
#import "ReactiveCocoa/Objective-C/NSObject+RACPropertySubscribing.h"
#import "ReactiveCocoa/Objective-C/NSObject+RACSelectorSignal.h"
#import "ReactiveCocoa/Objective-C/NSOrderedSet+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSSet+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSString+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSString+RACSupport.h"
#import "ReactiveCocoa/Objective-C/NSIndexSet+RACSequenceAdditions.h"
#import "ReactiveCocoa/Objective-C/NSURLConnection+RACSupport.h"
#import "ReactiveCocoa/Objective-C/NSUserDefaults+RACSupport.h"
#import "ReactiveCocoa/Objective-C/RACBehaviorSubject.h"
#import "ReactiveCocoa/Objective-C/RACChannel.h"
#import "ReactiveCocoa/Objective-C/RACCommand.h"
#import "ReactiveCocoa/Objective-C/RACCompoundDisposable.h"
#import "ReactiveCocoa/Objective-C/RACDisposable.h"
#import "ReactiveCocoa/Objective-C/RACDynamicPropertySuperclass.h"
#import "ReactiveCocoa/Objective-C/RACEvent.h"
#import "ReactiveCocoa/Objective-C/RACGroupedSignal.h"
#import "ReactiveCocoa/Objective-C/RACKVOChannel.h"
#import "ReactiveCocoa/Objective-C/RACMulticastConnection.h"
#import "ReactiveCocoa/Objective-C/RACQueueScheduler.h"
#import "ReactiveCocoa/Objective-C/RACQueueScheduler+Subclass.h"
#import "ReactiveCocoa/Objective-C/RACReplaySubject.h"
#import "ReactiveCocoa/Objective-C/RACScheduler.h"
#import "ReactiveCocoa/Objective-C/RACScheduler+Subclass.h"
#import "ReactiveCocoa/Objective-C/RACScopedDisposable.h"
#import "ReactiveCocoa/Objective-C/RACSequence.h"
#import "ReactiveCocoa/Objective-C/RACSerialDisposable.h"
#import "ReactiveCocoa/Objective-C/RACSignal+Operations.h"
#import "ReactiveCocoa/Objective-C/RACSignal.h"
#import "ReactiveCocoa/Objective-C/RACStream.h"
#import "ReactiveCocoa/Objective-C/RACSubject.h"
#import "ReactiveCocoa/Objective-C/RACSubscriber.h"
#import "ReactiveCocoa/Objective-C/RACSubscriptingAssignmentTrampoline.h"
#import "ReactiveCocoa/Objective-C/RACTargetQueueScheduler.h"
#import "ReactiveCocoa/Objective-C/RACTestScheduler.h"
#import "ReactiveCocoa/Objective-C/RACTuple.h"
#import "ReactiveCocoa/Objective-C/RACUnit.h"

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
	#import "ReactiveCocoa/Objective-C/MKAnnotationView+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIActionSheet+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIAlertView+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIBarButtonItem+RACCommandSupport.h"
	#import "ReactiveCocoa/Objective-C/UIButton+RACCommandSupport.h"
	#import "ReactiveCocoa/Objective-C/UICollectionReusableView+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIControl+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIDatePicker+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIGestureRecognizer+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIImagePickerController+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIRefreshControl+RACCommandSupport.h"
	#import "ReactiveCocoa/Objective-C/UISegmentedControl+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UISlider+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UIStepper+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UISwitch+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UITableViewCell+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UITableViewHeaderFooterView+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UITextField+RACSignalSupport.h"
	#import "ReactiveCocoa/Objective-C/UITextView+RACSignalSupport.h"
#elif TARGET_OS_MAC
	#import "ReactiveCocoa/NSControl+RACCommandSupport.h"
	#import "ReactiveCocoa/NSControl+RACTextSignalSupport.h"
	#import "ReactiveCocoa/NSObject+RACAppKitBindings.h"
	#import "ReactiveCocoa/NSText+RACSignalSupport.h"
#endif
