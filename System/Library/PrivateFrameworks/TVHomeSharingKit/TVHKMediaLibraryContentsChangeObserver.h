//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVHKDelayOperation, TVHKMediaLibrary, TVHKMediaLibraryContentsChange;
@protocol OS_dispatch_queue, TVHKMediaLibraryContentsChangeObserverDelegate;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryContentsChangeObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;	// 8 = 0x8
    id <TVHKMediaLibraryContentsChangeObserverDelegate> _delegate;	// 16 = 0x10
    TVHKMediaLibrary *_mediaLibrary;	// 24 = 0x18
    TVHKMediaLibraryContentsChange *_contentsChange;	// 32 = 0x20
    TVHKDelayOperation *_delayContentsChangeOperation;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00600000000a3509
- (void).cxx_destruct;	// IMP=0x00000000000a4116
@property(retain, nonatomic) TVHKDelayOperation *delayContentsChangeOperation; // @synthesize delayContentsChangeOperation=_delayContentsChangeOperation;
@property(copy, nonatomic) TVHKMediaLibraryContentsChange *contentsChange; // @synthesize contentsChange=_contentsChange;
@property(retain, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) __weak id <TVHKMediaLibraryContentsChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateContentsDidChange;	// IMP=0x00000000000a4013
- (void)_enqueueAsyncSerialQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a3f05
- (void)_delayContentsChangeOperationDidComplete:(id)arg1;	// IMP=0x00000000000a3d27
- (void)_handleMediaLibraryContentsChange;	// IMP=0x00000000000a39f1
- (void)_stopObserving;	// IMP=0x00000000000a3928
- (void)_startObserving;	// IMP=0x00000000000a3892
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000000a377a
- (void)stopObserving;	// IMP=0x00000000000a374c
- (void)startObserving;	// IMP=0x00000000000a371e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
- (void)dealloc;	// IMP=0x00000000000a3612
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000000a35a7
- (id)init;	// IMP=0x00000000000a3538

@end

