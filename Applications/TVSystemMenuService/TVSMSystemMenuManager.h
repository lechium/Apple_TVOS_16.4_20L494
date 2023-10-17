//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVSMSystemMenuStartupContext;
@protocol TVSMSystemMenuManagerDelegate;

@interface TVSMSystemMenuManager : NSObject
{
    id <TVSMSystemMenuManagerDelegate> _delegate;	// 8 = 0x8
    TVSMSystemMenuStartupContext *_startupContext;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000029d10
- (void).cxx_destruct;	// IMP=0x0020000000029f40
@property(retain, nonatomic) TVSMSystemMenuStartupContext *startupContext; // @synthesize startupContext=_startupContext;
@property(nonatomic) __weak id <TVSMSystemMenuManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSystemMenuAnimated:(_Bool)arg1 result:(id)arg2;	// IMP=0x0010000000029e00

@end

