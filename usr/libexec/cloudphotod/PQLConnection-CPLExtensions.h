//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@interface PQLConnection (CPLExtensions)
+ (id)cplInjectionFor:(id)arg1 isNotInIndexSet:(id)arg2;	// IMP=0x0010000000052e33
+ (id)cplInjectionFor:(id)arg1 isInIndexSet:(id)arg2;	// IMP=0x0010000000052dc0
- (_Bool)cplRegisterIndexSetMatch;	// IMP=0x0020000000052d1a
- (_Bool)cplRegisterDeterministicFunction:(id)arg1 nArgs:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052b23
- (id)cplFetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0010000000052a89
- (id)cplFetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x00100000000529ef
- (id)cplFetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x0010000000052959
- (id)cplFetch:(id)arg1;	// IMP=0x00100000000528bb
- (_Bool)cplExecute:(id)arg1;	// IMP=0x001000000005281d
- (id)lastCPLError;	// IMP=0x001000000005274d
@end

