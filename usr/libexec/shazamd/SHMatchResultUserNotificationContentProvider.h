//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHAttribution;

@interface SHMatchResultUserNotificationContentProvider : NSObject
{
    SHAttribution *_attribution;	// 8 = 0x8
}

+ (id)notificationCategories;	// IMP=0x004000000000d278
- (void).cxx_destruct;	// IMP=0x002000000000d550
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
- (id)notificationContentForNoMatch;	// IMP=0x001000000000d338
- (void)notificationContentForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cef7
- (id)initWithAttribution:(id)arg1;	// IMP=0x001000000000ce8c

@end
