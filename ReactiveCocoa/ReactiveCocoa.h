//
//  ReactiveCocoa.h
//  ReactiveCocoa
//
//  Created by Justin Spahr-Summers on 2014-07-03.
//  Copyright (c) 2014 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveCocoa.
FOUNDATION_EXPORT double ReactiveCocoaVersionNumber;

//! Project version string for ReactiveCocoa.
FOUNDATION_EXPORT const unsigned char ReactiveCocoaVersionString[];

#import <MathCampFramework/EXTKeyPathCoding.h>
#import <MathCampFramework/NSArray+RACSequenceAdditions.h>
#import <MathCampFramework/NSData+RACSupport.h>
#import <MathCampFramework/NSDictionary+RACSequenceAdditions.h>
#import <MathCampFramework/NSEnumerator+RACSequenceAdditions.h>
#import <MathCampFramework/NSFileHandle+RACSupport.h>
#import <MathCampFramework/NSNotificationCenter+RACSupport.h>
#import <MathCampFramework/NSObject+RACDeallocating.h>
#import <MathCampFramework/NSObject+RACLifting.h>
#import <MathCampFramework/NSObject+RACPropertySubscribing.h>
#import <MathCampFramework/NSObject+RACSelectorSignal.h>
#import <MathCampFramework/NSOrderedSet+RACSequenceAdditions.h>
#import <MathCampFramework/NSSet+RACSequenceAdditions.h>
#import <MathCampFramework/NSString+RACSequenceAdditions.h>
#import <MathCampFramework/NSString+RACSupport.h>
#import <MathCampFramework/NSIndexSet+RACSequenceAdditions.h>
#import <MathCampFramework/NSURLConnection+RACSupport.h>
#import <MathCampFramework/NSUserDefaults+RACSupport.h>
#import <MathCampFramework/RACBehaviorSubject.h>
#import <MathCampFramework/RACChannel.h>
#import <MathCampFramework/RACCommand.h>
#import <MathCampFramework/RACCompoundDisposable.h>
#import <MathCampFramework/RACDisposable.h>
#import <MathCampFramework/RACEvent.h>
#import <MathCampFramework/RACGroupedSignal.h>
#import <MathCampFramework/RACKVOChannel.h>
#import <MathCampFramework/RACMulticastConnection.h>
#import <MathCampFramework/RACQueueScheduler.h>
#import <MathCampFramework/RACReplaySubject.h>
#import <MathCampFramework/RACScheduler.h>
#import <MathCampFramework/RACScopedDisposable.h>
#import <MathCampFramework/RACSequence.h>
#import <MathCampFramework/RACSerialDisposable.h>
#import <MathCampFramework/RACSignal+Operations.h>
#import <MathCampFramework/RACSignal.h>
#import <MathCampFramework/RACStream.h>
#import <MathCampFramework/RACSubject.h>
#import <MathCampFramework/RACSubscriber.h>
#import <MathCampFramework/RACSubscriptingAssignmentTrampoline.h>
#import <MathCampFramework/RACTargetQueueScheduler.h>
#import <MathCampFramework/RACTestScheduler.h>
#import <MathCampFramework/RACTuple.h>
#import <MathCampFramework/RACUnit.h>

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
	#import <MathCampFramework/UIActionSheet+RACSignalSupport.h>
	#import <MathCampFramework/UIAlertView+RACSignalSupport.h>
	#import <MathCampFramework/UIBarButtonItem+RACCommandSupport.h>
	#import <MathCampFramework/UIButton+RACCommandSupport.h>
	#import <MathCampFramework/UICollectionReusableView+RACSignalSupport.h>
	#import <MathCampFramework/UIControl+RACSignalSupport.h>
	#import <MathCampFramework/UIDatePicker+RACSignalSupport.h>
	#import <MathCampFramework/UIGestureRecognizer+RACSignalSupport.h>
	#import <MathCampFramework/UIImagePickerController+RACSignalSupport.h>
	#import <MathCampFramework/UIRefreshControl+RACCommandSupport.h>
	#import <MathCampFramework/UISegmentedControl+RACSignalSupport.h>
	#import <MathCampFramework/UISlider+RACSignalSupport.h>
	#import <MathCampFramework/UIStepper+RACSignalSupport.h>
	#import <MathCampFramework/UISwitch+RACSignalSupport.h>
	#import <MathCampFramework/UITableViewCell+RACSignalSupport.h>
	#import <MathCampFramework/UITextField+RACSignalSupport.h>
	#import <MathCampFramework/UITextView+RACSignalSupport.h>
#elif TARGET_OS_MAC
	#import <MathCampFramework/NSControl+RACCommandSupport.h>
	#import <MathCampFramework/NSControl+RACTextSignalSupport.h>
	#import <MathCampFramework/NSObject+RACAppKitBindings.h>
	#import <MathCampFramework/NSText+RACSignalSupport.h>
#endif
