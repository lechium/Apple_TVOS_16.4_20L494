//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandGetPrimordialDataContainer
{
    _Bool _useCodeSignDatabase;	// 8 = 0x8
    _Bool _extension;	// 9 = 0x9
    unsigned int _platform;	// 12 = 0xc
}

+ (Class)incomingMessageClass;	// IMP=0x001000000006eca7
+ (unsigned long long)command;	// IMP=0x001000000006ec71
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) _Bool useCodeSignDatabase; // @synthesize useCodeSignDatabase=_useCodeSignDatabase;
- (void)execute;	// IMP=0x000000000006e02b
- (_Bool)preflightClientAllowed;	// IMP=0x000000000006dff8
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x000000000006defd

@end
