//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HPSAccessorySettingsObserverDelegate;

__attribute__((visibility("hidden")))
@interface HPSAccessorySettingsObserver : NSObject
{
    id <HPSAccessorySettingsObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d928
@property(nonatomic) __weak id <HPSAccessorySettingsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)settings:(id)arg1 didUpdateForIdentifier:(id)arg2 keyPath:(id)arg3;	// IMP=0x000000000000d85d
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x000000000000d857

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

