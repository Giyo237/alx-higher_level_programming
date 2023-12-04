#!/usr/bin/python3
def multiple_returns(sentence):
if not sentence:
	sentence = None
if sentence:
	sl = len(sentence)
else:
	sl = 0
return (sl, sentence if not sentence else sentence[:1])
