//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedOutOfBandStreamingZipTransferSeed;

@interface IXSPromisedOutOfBandStreamingZipTransfer
{
}

- (unsigned long long)totalBytesForProgress;	// IMP=0x001000000000292d
- (void)reset;	// IMP=0x0010000000002892
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002863
- (oneway void)_remote_setArchiveBytesConsumed:(unsigned long long)arg1;	// IMP=0x00100000000029a6

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedOutOfBandStreamingZipTransferSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedOutOfBandStreamingZipTransferSeed *seed; // @dynamic seed;

@end

