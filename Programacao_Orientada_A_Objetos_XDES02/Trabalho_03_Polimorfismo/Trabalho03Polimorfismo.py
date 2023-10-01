# Nome: Rafael dos Santos Fortes
# Turma: XDES02
from abc import ABC, abstractmethod

class Empregada(ABC): 
    def __init__(self, nome, telefone):
        self.__nome = nome
        self.__telefone = telefone

    @property
    def nome(self):
        return self.__nome
    
    @property
    def telefone(self):
        return self.__telefone
    
    @nome.setter
    def nome(self, nome):
        self.__nome = nome
    
    @telefone.setter
    def telefone(self, telefone):
        self.__telefone = telefone
    
    @abstractmethod
    def getSalario(self):
        pass

class Horista(Empregada):
    def __init__(self, nome, telefone, horasTrabalhadas, valorPorHora):
        super().__init__(nome, telefone)
        self.__horasTrabalhadas = horasTrabalhadas
        self.__valorPorHora = valorPorHora

    @property
    def horasTrabalhadas(self):
        return self.__horasTrabalhadas
    
    @property
    def valorPorHora(self):
        return self.__valorPorHora
    
    @horasTrabalhadas.setter
    def horasTrabalhadas(self, horasTrabalhadas):
        self.__horasTrabalhadas = horasTrabalhadas
    
    @valorPorHora.setter
    def valorPorHora(self, valorPorHora):
        self.__valorPorHora = valorPorHora
    
    def getSalario(self):
        valor = self.__horasTrabalhadas * self.__valorPorHora
        return valor
    
class Diarista(Empregada):
    def __init__(self, nome, telefone, diasTrabalhados, valorPorDia):
        super().__init__(nome, telefone)
        self.__diasTrabalhados = diasTrabalhados
        self.__valorPorDia = valorPorDia

    @property
    def diasTrabalhados(self):
        return self.__diasTrabalhados
    
    @property
    def valorPorDia(self):
        return self.__valorPorDia
    
    @diasTrabalhados.setter
    def diasTrabalhados(self, diasTrabalhados):
        self.__diasTrabalhados = diasTrabalhados
    
    @valorPorDia.setter
    def valorPorDia(self, valorPorDia):
        self.__valorPorDia = valorPorDia
    
    def getSalario(self):
        valor = self.__diasTrabalhados * self.__valorPorDia
        return valor

class Mensalista(Empregada):
    def __init__(self, nome, telefone, valorMensal):
        super().__init__(nome, telefone)
        self.__valorMensal = valorMensal

    @property
    def valorMensal(self):
        return self.__valorMensal
    
    @valorMensal.setter
    def valorMensal(self, valorMensal):
        self.__valorMensal = valorMensal
    
    def getSalario(self):
        valor = self.__valorMensal
        return valor

if __name__ == "__main__":
    print('Nome: Rafael dos Santos Fortes')
    print('Turma: XDES02')

    emp1 = Horista("Leticia", "(11) 91234-5678", 160, 12)
    emp2 = Diarista("Marcela", "(12) 79876-5432", 20, 65)
    emp3 = Mensalista("Celia", "(35) 91111-2222", 1200)

    emps = [emp1, emp2, emp3]

    empMaisBarata = emp1

    print('\nLista de empregadas:')
    for emp in emps:
        if(empMaisBarata.getSalario() > emp.getSalario()):
            empMaisBarata = emp
        print(f'\tNome: {emp.nome}\tTelefone: {emp.telefone}\tSalário mensal: R$ {emp.getSalario()},00.')
    
    print('\nEmpregada mais barata:')
    print(f'\tNome: {empMaisBarata.nome}\tTelefone: {empMaisBarata.telefone}\tSalário mensal: R$ {empMaisBarata.getSalario()},00.\n')