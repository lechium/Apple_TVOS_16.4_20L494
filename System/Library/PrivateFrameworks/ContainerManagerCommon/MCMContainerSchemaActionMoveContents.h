//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionMoveContents
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x00100000000702ff
- (void).cxx_destruct;	// IMP=0x000000000006f925
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000000006f6f8
- (id)description;	// IMP=0x000000000006f60b
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x000000000006f4ee

@end

