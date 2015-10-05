#ifndef CALENDAR_H
#define CALENDAR_H
#include <iostream>
#include <memory>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
class Calendar
{
	private:
		std::vector<int> january;
		std::vector<int> february;
		std::vector<int> march;
		std::vector<int> april;
		std::vector<int> may;
		std::vector<int> june;
		std::vector<int> july;
		std::vector<int> august;
		std::vector<int> september;
		std::vector<int> october;
		std::vector<int> november;
		std::vector<int> december;
	public:
		Calendar();
		void fill();
		void fillJanuary();
		void fillFebruary();
		void fillMarch();
		void fillApril();
		void fillMay();
		void fillJune();
		void fillJuly();
		void fillAugust();
		void fillSeptember();
		void fillOctober();
		void fillNovember();
		void fillDecember();
		bool isJanuaryFull();
		bool isFebruaryFull();
		bool isMarchFull();
		bool isAprilFull();
		bool isMayFull();
		bool isJuneFull();
		bool isJulyFull();
		bool isAugustFull();
		bool isSeptemberFull();
		bool isOctoberFull();
		bool isNovemberFull();
		bool isDecemberFull();
		bool dateExistsInJanuary(const int Date);
		bool dateExistsInFebruary(const int Date);
		bool dateExistsInMarch(const int Date);
		bool dateExistsInApril(const int Date);
		bool dateExistsInMay(const int Date);
		bool dateExistsInJune(const int Date);
		bool dateExistsInJuly(const int Date);
		bool dateExistsInAugust(const int Date);
		bool dateExistsInSeptember(const int Date);
		bool dateExistsInOctober(const int Date);
		bool dateExistsInNovember(const int Date);
		bool dateExistsInDecember(const int Date);
		void removeJanuaryDate(const int Date);
		void removeFebruaryDate(const int Date);
		void removeMarchDate(const int Date);
		void removeAprilDate(const int Date);
		void removeMayDate(const int Date);
		void removeJuneDate(const int Date);
		void removeJulyDate(const int Date);
		void removeAugustDate(const int Date);
		void removeSeptemberDate(const int Date);
		void removeOctoberDate(const int Date);
		void removeNovemberDate(const int Date);
		void removeDecemberDate(const int Date);
		auto getJanuary() const;
		auto getFebruary() const;
		auto getMarch() const;
		auto getApril() const;
		auto getMay() const;
		auto getJune() const;
		auto getJuly() const;
		auto getAugust() const;
		auto getSeptember() const;
		auto getOctober() const;
		auto getNovember() const;
		auto getDecember() const;		
};
#endif