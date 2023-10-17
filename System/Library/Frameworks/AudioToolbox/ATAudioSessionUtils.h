//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ATAudioSessionUtils : NSObject
{
}

+ (id)getPort:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x0080000000038be5
+ (id)getPorts:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x00800000000389d7
+ (id)getRouteStringFromAVASRouteDescription:(id)arg1;	// IMP=0x0080000000038725
+ (id)getRouteDescriptionFromAVASRouteDescription:(id)arg1;	// IMP=0x00800000000385ab
+ (id)outputPortTypes;	// IMP=0x00800000000381cd
+ (id)inputPortTypes;	// IMP=0x0080000000037f86
+ (id)modes;	// IMP=0x0080000000037acd
+ (id)categories;	// IMP=0x00800000000377c8
+ (id)KVOProperties;	// IMP=0x00800000000377bb
+ (id)getMappedObjectOf:(id)arg1 inside:(id)arg2 ofType:(int)arg3;	// IMP=0x0080000000037591
+ (struct __CFString *)getAudioSessionPortType:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x0080000000037498
+ (unsigned int)getAudioSessionMode:(id)arg1;	// IMP=0x00800000000373ce
+ (id)getAVASMode:(unsigned int)arg1;	// IMP=0x0080000000037319
+ (unsigned int)getAudioSessionCategory:(id)arg1;	// IMP=0x008000000003724f
+ (id)getAVASCategory:(unsigned int)arg1;	// IMP=0x008000000003719a
+ (unsigned int)getAudioSessionProperty:(id)arg1;	// IMP=0x00800000000370d0
+ (id)getAVASProperty:(unsigned int)arg1;	// IMP=0x008000000003701b
+ (unsigned long long)getCategoryOptionFromPropertyID:(unsigned int)arg1;	// IMP=0x0080000000036f0e

@end

