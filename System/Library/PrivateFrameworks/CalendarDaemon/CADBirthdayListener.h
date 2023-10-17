//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CalBirthdayListener;

__attribute__((visibility("hidden")))
@interface CADBirthdayListener : NSObject
{
    id <CalBirthdayListener> _ekBirthdayListener;	// 8 = 0x8
    Class _listenerClass;	// 16 = 0x10
}

+ (_Bool)birthdayCalendarEnabled;	// IMP=0x006000000004b0f8
+ (void)setBirthdayCalendarEnabled:(_Bool)arg1;	// IMP=0x006000000004b0a5
+ (void)reset;	// IMP=0x006000000004af77
+ (void)start;	// IMP=0x006000000004aee4
+ (id)sharedListener;	// IMP=0x006000000004ae8f
- (void).cxx_destruct;	// IMP=0x000000000004b179
@property(retain, nonatomic) Class listenerClass; // @synthesize listenerClass=_listenerClass;
@property(retain, nonatomic) id <CalBirthdayListener> ekBirthdayListener; // @synthesize ekBirthdayListener=_ekBirthdayListener;
- (_Bool)birthdayCalendarEnabled;	// IMP=0x000000000004b08f
- (void)setBirthdayCalendarEnabled:(_Bool)arg1;	// IMP=0x000000000004b035
- (void)reset;	// IMP=0x000000000004aff8
- (void)start;	// IMP=0x000000000004afbb
- (id)init;	// IMP=0x000000000004ae00

@end

