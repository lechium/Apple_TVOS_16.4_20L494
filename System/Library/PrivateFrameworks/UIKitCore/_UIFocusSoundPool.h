//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundPool : NSObject
{
    NSURL *_soundFileURL;	// 8 = 0x8
    unsigned int _originalSystemSoundID;	// 16 = 0x10
    NSArray *_queue;	// 24 = 0x18
    unsigned long long _queueIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000064c0b0
- (unsigned int)playableSystemSoundID;	// IMP=0x000000000064bd01
- (id)initWithSoundFileURL:(id)arg1;	// IMP=0x000000000064bc8e
- (id)initWithSystemSoundID:(unsigned int)arg1;	// IMP=0x000000000064bc4b

@end

