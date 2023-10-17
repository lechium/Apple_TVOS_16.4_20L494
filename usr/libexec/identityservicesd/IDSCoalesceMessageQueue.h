//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface IDSCoalesceMessageQueue : NSObject
{
    NSString *_topic;	// 8 = 0x8
    NSNumber *_sendMode;	// 16 = 0x10
    NSMutableArray *_infos;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000029d8c0
@property(retain, nonatomic) NSMutableArray *infos; // @synthesize infos=_infos;
@property(retain, nonatomic) NSNumber *sendMode; // @synthesize sendMode=_sendMode;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (unsigned long long)count;	// IMP=0x001000000029d770
- (_Bool)isEmpty;	// IMP=0x001000000029d710
- (id)initWithTopic:(id)arg1 sendMode:(id)arg2;	// IMP=0x001000000029d610

@end

