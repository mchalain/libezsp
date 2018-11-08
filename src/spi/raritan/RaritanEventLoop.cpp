#include "RaritanEventLoop.h"

RaritanEventLoop::RaritanEventLoop() : m_selector(*pp::SelectorSingleton::getInstance()) {

}

void RaritanEventLoop::run() {
	this->m_selector.run();
}

pp::Selector& RaritanEventLoop::getSelector() {
	return this->m_selector;
}