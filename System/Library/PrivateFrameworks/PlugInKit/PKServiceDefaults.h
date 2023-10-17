//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults
{
    PKServicePersonality *_personality;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001debc
@property __weak PKServicePersonality *personality; // @synthesize personality=_personality;
- (_Bool)synchronize;	// IMP=0x000000000001de28
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001dd81
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001dcea
- (id)initWithPersonality:(id)arg1;	// IMP=0x000000000001dc82

@end
